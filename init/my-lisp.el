;; my lisp configration
(add-to-list 'load-path "~/.emacs.d/elisp")
(add-to-list 'load-path "~/.emacs.d/plugins/ac-slime")

;; SLIME
;; Use SBCL as default
(setq inferior-lisp-program "/usr/bin/sbcl")
(add-to-list 'load-path "/usr/share/slime")
;;; (require 'slime)
(require 'slime-autoloads)
(slime-setup)
;;; Load Swank faster
;; (setq slime-lisp-implementations
;;       '((sbcl ("sbcl" "--core" "sbcl.core-for-slime"))))

;; (setq slime-lisp-implementations
;; 	  '((sbcl
;;          ("sbcl" "--core" "sbcl.core-for-slime"))))
;; (setq slime-lisp-implementations
;; 	  '((sbcl
;;          ("sbcl" "--core" "sbcl.core-with-swank")
;;          :init (lambda (port-file _)
;;                  (format "(swank:start-server %S)\n" port-file)))))

(require 'ac-slime)
(add-hook 'slime-mode-hook 'set-up-slime-ac)
(add-hook 'slime-repl-mode-hook 'set-up-slime-ac)
(eval-after-load "auto-complete"
  '(add-to-list 'ac-modes 'slime-repl-mode))

(global-set-key [(control ?c) ?p] 'comment-region)
(global-set-key [(control ?c) ?q] 'uncomment-region)

(add-to-list 'ac-modes 'lisp-mode)
(add-to-list 'ac-modes 'comint-mode)
(add-to-list 'ac-modes 'slime-mode)

;; scheme
(require 'scheme-complete)

(eval-after-load 'scheme
  '(define-key scheme-mode-map "\t" 'scheme-complete-or-indent))

(autoload 'scheme-get-current-symbol-info "scheme-complete" nil t)
(add-hook 'scheme-mode-hook
	  (lambda ()
	    (make-local-variable 'eldoc-documentation-function)
	    (setq eldoc-documentation-function
		  'scheme-get-current-symbol-info)
	    (eldoc-mode)))

(require 'duck)

(require 'r5rs)

(global-set-key [(control ?.) ?h] 'scheme-r5rs-lookup)

(require 'scheme-here)

(require 'rainbow-delimiters)
;; (add-hook 'scheme-mode 'rainbow-delimiters-mode)
;; (add-hook 'prog-mode-hook 'rainbow-delimiters-mode)
(global-rainbow-delimiters-mode)

(require 'highlight-parentheses)
(define-globalized-minor-mode global-highlight-parentheses-mode
  highlight-parentheses-mode
  (lambda ()
    (highlight-parentheses-mode t)))
(global-highlight-parentheses-mode t)

;;Geiser
(load-file "~/.emacs.d/plugins/geiser/elisp/geiser.el")
;; C-c g to start up geisor
(global-set-key [(control ?c) ?g] 'run-geiser)

;; (add-hook 'emacs-lisp-mode-hook
;;           '(lambda ()
;;              (highlight-parentheses-mode)
;;              (setq autopair-handle-action-fns
;;                    (list 'autopair-default-handle-action
;;                          '(lambda (action pair pos-before)
;;                             (hl-paren-color-update))))))

;; (add-hook 'highlight-parentheses-mode-hook
;; 	  '(lambda ()
;; 	     (setq autopair-handle-action-fns
;; 		   (append
;; 		    (if autopair-handle-action-fns
;; 			autopair-handle-action-fns
;; 		      '(autopair-default-handle-action))
;; 		    '((lambda (action pair pos-before)
;; 			(hl-paren-color-update)))))))
