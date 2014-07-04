;; @Author: Young Lee
;; @Email: youngleemails@gmail.com
;; @Time: Wed Jun 11 17:32:23 2014
(add-to-list 'load-path "~/.emacs.d/elisp")
(add-to-list 'load-path "~/.emacs.d/php/php-mode-1.13.1")
(add-to-list 'load-path "~/.emacs.d/packages/nxhtml")
(add-to-list 'load-path "~/.emacs.d/packages/mmm-mode")


;; PHP mode
(require 'php-mode)
;; Use abbrev-mode
(add-hook 'php-mode-hook
		  '(lambda () (define-abbrev php-mode-abbrev-table "ex" "extends")))
(autoload 'php-mode "php-mode" "Major mode for editing php code." t)
(add-to-list 'auto-mode-alist '("\\.php$" . php-mode))
(add-to-list 'auto-mode-alist '("\\.inc$" . php-mode))


;; PHP-MODE-IMPROVED
;; (require 'php-mode-improved)
(add-hook 'php-mode-hook
		  '(lambda () (define-abbrev php-mode-abbrev-table "ex" "extends")))



;; Toggle between PHP & HTML Helper mode.  Useful when working on
;; php files, that can been intertwined with HTML code
(defun toggle-php-html-mode ()
  (interactive)
  "Toggle mode between PHP & HTML Helper modes"
  (cond ((string= mode-name "HTML helper")
         (php-mode))
        ((string= mode-name "PHP")
         (html-helper-mode))))
(global-set-key [f4] 'toggle-php-html-mode)


;; Quick documentation lookup
(add-hook 'php-mode-hook 'my-php-mode-stuff)

(defun my-php-mode-stuff ()
  (local-set-key (kbd "<f2>") 'my-php-function-lookup)
  (local-set-key (kbd "C-<f2>") 'my-php-symbol-lookup))

(defun my-php-symbol-lookup ()
  (interactive)
  (let ((symbol (symbol-at-point)))
    (if (not symbol)
        (message "No symbol at point.")
      (browse-url (concat "http://php.net/manual-lookup.php?pattern="
                          (symbol-name symbol))))))

(defun my-php-function-lookup ()
  (interactive)
  (let* ((function (symbol-name (or (symbol-at-point)
                                    (error "No function at point."))))
         (buf (url-retrieve-synchronously (concat "http://php.net/manual-lookup.php?pattern=" function))))
    (with-current-buffer buf
      (goto-char (point-min))
        (let (desc)
          (when (re-search-forward "<div class=\"methodsynopsis dc-description\">\\(\\(.\\|\n\\)*?\\)</div>" nil t)
            (setq desc
              (replace-regexp-in-string
                " +" " "
                (replace-regexp-in-string
                  "\n" ""
                  (replace-regexp-in-string "<.*?>" "" (match-string-no-properties 1)))))
            (when (re-search-forward "<p class=\"para rdfs-comment\">\\(\\(.\\|\n\\)*?\\)</p>" nil t)
              (setq desc
                    (concat desc "\n\n"
                            (replace-regexp-in-string
                             " +" " "
                             (replace-regexp-in-string
                              "\n" ""
                              (replace-regexp-in-string "<.*?>" "" (match-string-no-properties 1))))))))
          (if desc
              (message desc)
            (message "Could not extract function info. Press C-F1 to go the description."))))
    (kill-buffer buf)))

;; (add-hook 'php-mode-hook 'my-php-mode-stuff)
;; (defun my-php-mode-stuff ()
;;   (local-set-key (kbd "<f3>") 'my-php-symbol-lookup))
;; (defun my-php-symbol-lookup ()
;;   (interactive)
;;   (let ((symbol (symbol-at-point)))
;;     (if (not symbol)
;;         (message "No symbol at point.")
;;       (browse-url (concat "http://php.net/manual-lookup.php?pattern="
;;                           (symbol-name symbol))))))


;; Indentation of arrays
(add-hook 'php-mode-hook (lambda ()
    (defun ywb-php-lineup-arglist-intro (langelem)
      (save-excursion
        (goto-char (cdr langelem))
        (vector (+ (current-column) c-basic-offset))))
    (defun ywb-php-lineup-arglist-close (langelem)
      (save-excursion
        (goto-char (cdr langelem))
        (vector (current-column))))
    (c-set-offset 'arglist-intro 'ywb-php-lineup-arglist-intro)
    (c-set-offset 'arglist-close 'ywb-php-lineup-arglist-close)))


;; Closures
(defun unindent-closure ()
  "Fix php-mode indent for closures"
  (let ((syntax (mapcar 'car c-syntactic-context)))
    (if (and (member 'arglist-cont-nonempty syntax)
             (or
              (member 'statement-block-intro syntax)
              (member 'brace-list-intro syntax)
              (member 'brace-list-close syntax)
              (member 'block-close syntax)))
       (save-excursion
          (beginning-of-line)
          (delete-char (* (count 'arglist-cont-nonempty syntax)
                          c-basic-offset))) )))
(add-hook 'php-mode-hook
          (lambda ()
            (add-hook 'c-special-indent-hook 'unindent-closure)))



;;nXhtml
;; (load "~/.emacs.d/packages/nxhtml/autostart.el")



;; mmm-mode
(require 'mmm-mode)
(require 'mmm-auto)
(setq mmm-global-mode 'maybe)
(mmm-add-mode-ext-class 'html-mode "\\.php\\'" 'html-php)
(mmm-add-mode-ext-class 'html-mode nil 'mason)
(mmm-add-mode-ext-class nil "\\.nw\\'" 'noweb)


;; php flymake
(require 'flymake)

(defun flymake-php-init ()
  "Use php to check the syntax of the current file."
  (let* ((temp (flymake-init-create-temp-buffer-copy 'flymake-create-temp-inplace))
		 (local (file-relative-name temp (file-name-directory buffer-file-name))))
    (list "php" (list "-f" local "-l"))))

(add-to-list 'flymake-err-line-patterns 
			 '("\\(Parse\\|Fatal\\) error: +\\(.*?\\) in \\(.*?\\) on line \\([0-9]+\\)$" 3 4 nil 2))

(add-to-list 'flymake-allowed-file-name-masks '("\\.php$" flymake-php-init))

;; Drupal-type extensions
(add-to-list 'flymake-allowed-file-name-masks '("\\.module$" flymake-php-init))
(add-to-list 'flymake-allowed-file-name-masks '("\\.install$" flymake-php-init))
(add-to-list 'flymake-allowed-file-name-masks '("\\.inc$" flymake-php-init))
(add-to-list 'flymake-allowed-file-name-masks '("\\.engine$" flymake-php-init))

(add-hook 'php-mode-hook (lambda () (flymake-mode 1)))
(define-key php-mode-map '[M-S-up] 'flymake-goto-prev-error)
(define-key php-mode-map '[M-S-down] 'flymake-goto-next-error)


;; web-mode
;; (require 'web-mode)
;; (add-to-list 'auto-mode-alist '("\\.phtml\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.tpl\\.php\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.[gj]sp\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.as[cp]x\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.erb\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.mustache\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.djhtml\\'" . web-mode))
;; (add-to-list 'auto-mode-alist '("\\.html?\\'" . web-mode))

;; (setq web-mode-engines-alist
;; 	  '(("php" . "\\.phtml\\'")
;; 		("blade" . "\\.blade\\.")) )

;; (defun my-web-mode-hook ()
;;   "Hooks for Web mode."
;;   (setq web-mode-markup-indent-offset 2) )
;; (add-hook 'web-mode-hook 'my-web-mode-hook)

;; (setq web-mode-markup-indent-offset 2)
;; (setq web-mode-css-indent-offset 2)
;; (setq web-mode-code-indent-offset 2)

;; (setq web-mode-style-padding 1)
;; (setq web-mode-script-padding 1)
;; (setq web-mode-block-padding 0)

;; (setq web-mode-comment-style 2)

;; ;; (set-face-attribute 'web-mode-css-rule-face nil :foreground "Pink3")

;; (setq web-mode-extra-snippets
;;       '(("erb" . (("name" . ("beg" . "end"))))
;;         ("php" . (("name" . ("beg" . "end"))
;;                   ("name" . ("beg" . "end")))) ))
;; (setq web-mode-extra-auto-pairs
;;       '(("erb" . (("open" "close")))
;;         ("php" . (("open" "close") ("open" "close"))) ))

;; ;; Auto-pairing
;; (setq web-mode-enable-auto-pairing t)
;; ;; CSS colorization
;; (setq web-mode-enable-css-colorization t)
;; ;; Block face: can be used to set blocks background (see web-mode-block-face)
;; (setq web-mode-enable-block-face t)
;; ;; Part face: can be used to set parts background (see web-mode-part-face)
;; (setq web-mode-enable-part-face t)
;; ;; Comment keywords (see web-mode-comment-keyword-face)
;; (setq web-mode-enable-comment-keywords t)
;; ;; Heredoc (cf. PHP strings) fontification (when the identifier is <<<EOTHTML or <<<EOTJAVASCRIPT)
;; (setq web-mode-enable-heredoc-fontification t)

;; ;; Add constants
;; ;; (setq web-mode-extra-constants '(("php" . ("CONS1" "CONS2")))
;; ;; Highlight current HTML element (see web-mode-current-element-highlight-face)       
;; (setq web-mode-enable-current-element-highlight t)
