;; my lisp configration
(add-to-list 'load-path
			 "~/.emacs.d/elisp")

;; scheme
(require 'scheme-complete)

(eval-after-load 'scheme
  '(define-key scheme-mode-map "\t" 'scheme-complete-or-indent))

(autoload 'scheme-get-current-symbol-info "scheme-complete" nil t)
(add-hook 'scheme-mode-hook
		  (lambda ()
			(make-local-variable 'eldoc-documentation-function)
			(setq eldoc-documentation-function 'scheme-get-current-symbol-info)
			(eldoc-mode)))

(require 'duck)

(require 'r5rs)
(global-set-key [(control ?.) ?h] 'scheme-r5rs-lookup)

(require 'scheme-here)

;; SLIME
;;(setq inferior-lisp-program
;;	  "/opt/sbcl/bin/sbcl") ;; Lisp system
;;(add-to-list ’load-path
;;			   "~/.emacs.d/") ;; SLIME directory
;;(require 'slime)
;;(slime-setup)
