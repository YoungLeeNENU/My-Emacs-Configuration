(defvar gca:gcc-program "gcc-code-assist")
(defvar gca:g++-program "g++-code-assist")
(defvar gca:cflags "")

(defun gca:select-driver (filename)
  (if (gca:g++-file-p filename)
      (list gca:g++-program "c++")
    (list gca:gcc-program "c")))

(defun gca:g++-file-p (filename)
  (string-match "\\.\\(?:cpp\\|cc\\|cxx\\)$" filename))

(defun gca:get-temp-name (filename)
  (concat (file-name-directory filename) "/!gca!" (file-name-nondirectory filename)))

(defun gca:parse-completion-string (string)
  (when (string-match "^completion: \\([^ ]*\\)\\(?: +\"\\([^\"]+\\)\"\\)?$" string)
    (let ((name (match-string 1 string))
          (decl (match-string 2 string)))
      (list name name decl))))

(defun gca:get-completions (&optional buffer point)
  (or buffer (setq buffer (current-buffer)))
  (or point (setq point (point)))
  (with-current-buffer buffer
    (save-excursion
      (goto-char point)
      (let* ((filename (buffer-file-name buffer))
             (tempfile (gca:get-temp-name filename))
             (driver-info (gca:select-driver filename))
             (driver (nth 0 driver-info))
             (langname (nth 1 driver-info))
             (line (line-number-at-pos))
             (column (1+ (current-column))))
        (write-region (point-min) (point-max) tempfile nil 0)
        (unwind-protect
            (let ((command (format "%s %s -x %s -fsyntax-only -code-completion-at=%s:%s:%s %s"
                                   driver
                                   gca:cflags
                                   langname
                                   tempfile line column
                                   tempfile)))
              (delq nil (mapcar 'gca:parse-completion-string
                                (split-string (shell-command-to-string command)
                                              "\n"))))
          (delete-file tempfile))))))

(ac-define-source gca-member
  '((candidates . (gca:get-completions nil ac-point))
    (prefix "\\(?:\\.\\|->\\)\\(\\(?:[a-zA-Z_][a-zA-Z0-9_]*\\)?\\)" nil 1)
    (document . (lambda (item) (nth 1 item)))
    (requires . 0)
    (symbol . "m")
    (cache)))

(ac-define-source gca-static-member
  '((candidates . (gca:get-completions nil ac-point))
    (prefix "::\\(\\(?:[a-zA-Z_][a-zA-Z0-9_]*\\)?\\)" nil 1)
    (document . (lambda (item) (nth 1 item)))
    (requires . 0)
    (symbol . "M")
    (cache)))
