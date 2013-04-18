;;python mode
(require 'python-mode)
(add-to-list 'auto-mode-alist '("\\.py\\'" . python-mode))

;;(add-to-list 'load-path "/home/neo/.emacs.d/packages/python-mode.el-6.0.12")
;;(setq py-install-directory "/home/neo/.emacs.d/packages/python-mode.el-6.0.12")
;;(require 'python-mode)
;;(setq py-shell-name "ipython")

;;ipython
(require 'ipython)

;;lambda-mode
(require 'lambda-mode)
(add-hook 'python-mode-hook #'lambda-mode 1)
(setq lambda-symbol (string (make-char 'greek-iso8859-7 107)))


;;anything
(require 'anything) (require 'anything-ipython)
(when (require 'anything-show-completion nil t)
  (use-anything-show-completion 'anything-ipython-complete
								'(length initial-pattern)))
(global-set-key (kbd "M-p") 'anything-ipython-complete)

;;pylookup
;; add pylookup to your loadpath, ex) ~/.emacs.d/pylookup
(setq pylookup-dir "/home/neo/.emacs.d/packages/tsgates-pylookup-3d3151a")
(add-to-list 'load-path pylookup-dir)
;; load pylookup when compile time
(eval-when-compile (require 'pylookup))
;; set executable file and db file
(setq pylookup-program (concat pylookup-dir "/pylookup.py"))
(setq pylookup-db-file (concat pylookup-dir "/pylookup.db"))
;; set search option if you want
;; (setq pylookup-search-options '("--insensitive" "0" "--desc" "0"))
;; to speedup, just load it on demand
(autoload 'pylookup-lookup "pylookup"
  "Lookup SEARCH-TERM in the Python HTML indexes." t)
(autoload 'pylookup-update "pylookup"
  "Run pylookup-update and create the database at `pylookup-db-file'." t)
(autoload 'pylookup-lookup "pylookup")
(autoload 'pylookup-update "pylookup")
(setq pylookup-program "~/.emacs.d//packages/tsgates-pylookup-3d3151a/pylookup.py")
(setq pylookup-db-file "~/.emacs.d//packages/tsgates-pylookup-3d3151a/pylookup.db")
(global-set-key "\C-ch" 'pylookup-lookup)


(require 'comint)
(define-key comint-mode-map (kbd "M-") 'comint-next-input)
(define-key comint-mode-map (kbd "M-") 'comint-previous-input)
(define-key comint-mode-map [down] 'comint-next-matching-input-from-input)
(define-key comint-mode-map [up] 'comint-previous-matching-input-from-input)


(autoload 'autopair-global-mode "autopair" nil t)
(autopair-global-mode)
(add-hook 'lisp-mode-hook #'(lambda () (setq autopair-dont-activate t)))

(add-hook 'python-mode-hook
          #'(lambda () (push '(?' . ?')
							 (getf autopair-extra-pairs :code))
			  (setq autopair-handle-action-fns
					(list #'autopair-default-handle-action
						  #'autopair-python-triple-quote-action))))

(require 'python-pep8)
(require 'python-pylint)

;;delete trailing space
(add-hook 'before-save-hook 'delete-trailing-whitespace)

(autoload 'pymacs-apply "pymacs")
(autoload 'pymacs-call "pymacs")
(autoload 'pymacs-eval "pymacs" nil 1)
(autoload 'pymacs-exec "pymacs" nil 1)
(autoload 'pymacs-load "pymacs" nil 1)
(autoload 'pymacs-autoload "pymacs")

(pymacs-load "ropemacs" "rope-")
(setq ropemacs-enable-autoimport 1)

;; pycomplete
(require 'pycomplete)
(setq auto-mode-alist (cons '("\\.py$" . python-mode) auto-mode-alist))
(autoload 'python-mode "python-mode" "Python editing mode." t)
(setq interpreter-mode-alist(cons '("python" . python-mode)
								  interpreter-mode-alist))

;;pdb setup, note the python version
(setq pdb-path '/usr/lib/python2.7/pdb.py
	  gud-pdb-command-name (symbol-name pdb-path))
(defadvice pdb (before gud-query-cmdline activate)
  "Provide a better default command line when called interactively."
  (interactive
   (list (gud-query-cmdline pdb-path
							(file-name-nondirectory buffer-file-name)))))
