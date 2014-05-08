(add-to-list 'load-path "~/.emacs.d/packages/emacs-w3m-1.4.4")
(autoload 'w3m "w3m" "Interface for w3m on Emacs." t)

(require 'mime-w3m)
(require 'w3m-load)

;;(require 'w3m-load)
(require 'w3m-e21)
(provide 'w3m-e23)
(setq w3m-default-display-inline-images t)
(defun w3m-link-numbering (&rest args)
  "Make overlays that display link numbers."
  (when w3m-link-numbering-mode
    (save-excursion
      (goto-char (point-min))
      (let ((i 0)
            overlay num)
        (catch 'already-numbered
          (while (w3m-goto-next-anchor)
            ;; 这里判断是否是一个锚链接
            (when (w3m-anchor)
              (when (get-char-property (point) 'w3m-link-numbering-overlay)
                (throw 'already-numbered nil))
              (setq overlay (make-overlay (point) (1+ (point)))
                    num (format "[%d]" (incf i)))
              (w3m-static-if (featurep 'xemacs)
			     (progn
			       (overlay-put overlay 'before-string num)
			       (set-glyph-face (extent-begin-glyph overlay)
					       'w3m-link-numbering))
			     (w3m-add-face-property 0 (length num) 'w3m-link-numbering num)
			     (overlay-put overlay 'before-string num)
			     (overlay-put overlay 'evaporate t))
              (overlay-put overlay 'w3m-link-numbering-overlay i))))))))

(defcustom w3m-use-toolbar
  (and (featurep 'tool-bar)
       ;; Emacs 22 and greater return t for `(featurep 'tool-bar)'
       ;; even if being launched with the -nw option.
       (display-images-p)
       (or (featurep 'gtk)
	   (image-type-available-p 'xpm)))
  "Non-nil activates toolbar of w3m."
  :group 'w3m
  :type 'boolean)
(setq w3m-coding-system 'utf-8
      w3m-file-coding-system 'utf-8
      w3m-file-name-coding-system 'utf-8
      w3m-input-coding-system 'utf-8
      w3m-output-coding-system 'utf-8
      w3m-terminal-coding-system 'utf-8)

(setq w3m-use-cookies t)
(setq w3m-add-referer t)
(setq w3m-follow-redirection 10)
(setq w3m-cookie-accept-bad-cookies t)
(setq w3m-display-inline-image t)
(setq w3m-default-display-inline-images t)

(defun w3m-auto-show ()
  "Scroll horizontally so that the point is visible."
  (when (and truncate-lines
             w3m-auto-show
             (not w3m-horizontal-scroll-done)
             (not (and (eq last-command this-command)
                       (or (eq (point) (point-min))
                           (eq (point) (point-max)))))
             (or (memq this-command '(beginning-of-buffer end-of-buffer))
                 (string-match "\\`i?search-"
                               (if (symbolp this-command) (symbol-name this-command) ""))
                 (and (markerp (nth 1 w3m-current-position))
                      (markerp (nth 2 w3m-current-position))
                      (>= (point)
                          (marker-position (nth 1 w3m-current-position)))
                      (<= (point)
                          (marker-position (nth 2 w3m-current-position))))))
    (w3m-horizontal-on-screen))
  (setq w3m-horizontal-scroll-done nil))
