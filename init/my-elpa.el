;; elpa management
;; ELPA
(setq package-archives '(("gnu" . "http://elpa.gnu.org/packages/")
                         ("marmalade" . "http://marmalade-repo.org/packages/")
                         ("melpa" . "http://melpa.milkbox.net/packages/")))

;; Adding transactionally
(add-to-list 'package-archives '("marmalade" . "http://marmalade-repo.org/packages/"))
(add-to-list 'package-archives '("melpa" . "http://melpa.milkbox.net/packages/"))

(add-to-list 'auto-mode-alist '("\\.gradle" . groovy-mode))
(add-hook 'groovy-mode-hook (lambda () (setq tab-width 4)))
(global-set-key
 "\M-?"
 (lambda ()
   (interactive)
   (call-interactively 'magit-status)))

(global-set-key (kbd "C-'")
		'shell-switcher-switch-buffer)

(add-hook 'after-init-hook 'cycbuf-init)

(eval-after-load "abcd-mode" ; <-- "abcd-mode", not 'abcd-mode
  '(progn
     (setq-default abcd-basic-offset 7) ; setting some option
     (add-to-list 'abcd-globals-list "console") ; appending to a list option
     (add-hook 'abcd-mode-hook 'prepare-some-abcd-soup) ; things to do for abcd mode buffers
     (define-key abcd-mode-map (kbd "C-c C-c") 'play-some-abcd-song) ; add some key binding for abcd mode
     ))

(eval-after-load "broccoli-autoloads" ; <-- "broccoli-autoloads", not "broccoli"
  '(progn
     (if (require 'broccoli nil t)
	 (progn
	   (broccoli-mode 1) ; Turn on Broccoli global minor mode if broccoli-autoloads.el doesn't do it.
	   (setq-default broccoli-how 'steamed) ; set some option.
	   (add-to-list 'broccoli-additional-stuff 'salt) ; add to a list option.
	   )
       (warn "broccoli is not found."))))
