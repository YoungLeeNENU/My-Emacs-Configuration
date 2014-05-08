;;FOR PERL PROGRAMMING
(add-to-list 'load-path "~/.emacs.d/elisp")
;;PDB
;; (add-to-list
;;  'load-path "~/.emacs.d/packages/Emacs-PDE-0.2.16/lisp")
;; (load "pde-load")

;;perlplus
(setq cperl-mode-hook
	  '(lambda ()
		 (require 'perlplus)
		 (define-key cperl-mode-map "\M-\t" 'perlplus-complete-symbol)
		 (perlplus-setup)))

;; (require 'perlnow)

(require 'perl-pod-coding)
(require 'compilation-perl)
(require 'perl-quote)
(require 'perl-use-utf8-coding)
(require 'pst-format)
(require 'xs-mode)
(require 'ffap-perl-module)
(require 'man-completion)
(require 'perl-pod-gt)
