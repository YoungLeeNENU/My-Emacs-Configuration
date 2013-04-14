(add-to-list 'load-path "~/.emacs.d/elisp/")

(eval-after-load 'eshell
  '(require 'eshell-autojump nil t))

(setq eshell-cmpl-compare-entry-function
	  (function
	   (lambda (left right)
		 (let ((exts completion-ignored-extensions) found)
		   (while exts
			 (if (string-match (concat "\\" (car exts) "$") right)
				 (setq found t exts nil))
			 (setq exts (cdr exts)))
		   (if found
			   nil
			 (file-newer-than-file-p left right))))))

;;(file-name-all-completions "sc" "/") =>
;;("scpx:" "scp2_old:" "scp1_old:" "scp2:" "scp1:" "scp:" "scratch/")

(defadvice pcomplete (around avoid-remote-connections activate)
  (let ((file-name-handler-alist (copy-alist file-name-handler-alist)))
	(setq file-name-handler-alist
		  (delete (rassoc 'tramp-completion-file-name-handler
						  file-name-handler-alist) file-name-handler-alist))
	ad-do-it))

(defun my-eshell-execute-current-line ()
  "Insert text of current line in eshell and execute."
  (interactive)
  (require 'eshell)
  (let ((command (buffer-substring
                  (save-excursion
                    (beginning-of-line)
                    (point))
                  (save-excursion
                    (end-of-line)
                    (point)))))
    (let ((buf (current-buffer)))
      (unless (get-buffer eshell-buffer-name)
        (eshell))
      (display-buffer eshell-buffer-name t)
      (switch-to-buffer-other-window eshell-buffer-name)
      (end-of-buffer)
      (eshell-kill-input)
      (insert command)
      (eshell-send-input)
      (end-of-buffer)
      (switch-to-buffer-other-window buf))))

(global-set-key [f9] 'my-eshell-execute-current-line)

;; (require 'em-joc)
;; (load "em-joc")
