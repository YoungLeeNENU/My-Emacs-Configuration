;;python mode
(add-to-list 'load-path "~/.emacs.d/elisp")
(add-to-list 'load-path "~/.emacs.d/plugins/pylookup")
(add-to-list 'load-path "~/.emacs.d/plugins/python-mode.el-6.1.3")
(add-to-list 'load-path "~/.emacs.d/plugins/emacs-jedi")
(add-to-list 'load-path "~/.emacs.d/plugins/ropemacs-0.7")
(add-to-list 'load-path "~/.emacs.d/plugins/rope-0.9.4")
(add-to-list 'load-path "~/.emacs.d/plugins/Pymacs")
(add-to-list 'load-path "~/.emacs.d/plugins/emacs-jedi-direx")
(add-to-list 'load-path "~/.emacs.d/plugins/emacs-epc/emacs-deferred")
(add-to-list 'load-path "~/.emacs.d/plugins/emacs-epc")
(add-to-list 'load-path "~/.emacs.d/plugins/emacs-epc/emacs-ctable")
(add-to-list 'load-path "~/.emacs.d/plugins/emacs-python-environment")
(setq py-install-directory "~/.emacs.d/packages/python-mode.el-6.0.12")


;; Python Mode
(require 'python-mode)
(add-to-list 'auto-mode-alist '("\.py\'" . python-mode))
(setq py-shell-name "ipython")


;; Ipython
(require 'ipython)
(setq-default py-shell-name "ipython")
(setq-default py-which-bufname "IPython")
;; use the wx backend, for both mayavi and matplotlib
(setq py-python-command-args
	  '("--gui=wx" "--pylab=wx" "-colors" "Linux"))
(setq py-force-py-shell-name-p t)
;; switch to the interpreter after executing code
(setq py-shell-switch-buffers-on-execute-p t)
(setq py-switch-buffers-on-execute-p t)
;; don't split windows
(setq py-split-windows-on-execute-p nil)
;; try to automagically figure out indentation
(setq py-smart-indentation t)


;; Pymacs
(autoload 'pymacs-apply "pymacs")
(autoload 'pymacs-call "pymacs")
(autoload 'pymacs-eval "pymacs" nil t)
(autoload 'pymacs-exec "pymacs" nil t)
(autoload 'pymacs-load "pymacs" nil t)
(autoload 'pymacs-autoload "pymacs")


;; Ropemacs
(require 'pymacs)
(pymacs-load "ropemacs" "rope-")
(setq ropemacs-enable-shortcuts nil)
(setq ropemacs-local-prefix "C-c C-p")
(setq ropemacs-enable-autoimport t)
(ac-ropemacs-initialize)
(add-hook 'python-mode-hook
		  (lambda ()
			(add-to-list 'ac-sources 'ac-source-ropemacs)))


;; Pycomplete
(require 'pycomplete)
(setq auto-mode-alist (cons '("\\.py$" . python-mode) auto-mode-alist))
(autoload 'python-mode "python-mode" "Python editing mode." t)
(setq interpreter-mode-alist(cons '("python" . python-mode)
				  interpreter-mode-alist))


;; Pylookup
(setq pylookup-dir "~/.emacs.d/packages/pylookup")
(add-to-list 'load-path pylookup-dir)
(eval-when-compile (require 'pylookup))
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


;; Python Environment
(require 'python-environment)
(defun install-python-dependencies ()
  (interactive)
  (python-environment-run "pip" "install" "epc"))


;; Epc
(require 'epc)


;; ;; Lambda Mode
;; (require 'lambda-mode)
;; (add-hook 'python-mode-hook #'lambda-mode 1)
;; (setq lambda-symbol (string (make-char 'greek-iso8859-7 107)))


'(
;; Jedi-Emacs
(require 'jedi)
(autoload 'jedi:setup "jedi" nil t)
(setq jedi:server-command
      (list "/usr/bin/python" jedi:server-script))
(setq jedi:server-command '("~/.emacs.d/plugins/emacs-jedi/jediepcserver.py"))
(add-hook 'python-mode-hook 'jedi:setup)
(setq jedi:complete-on-dot t)
(add-hook 'python-mode-hook 'jedi:ac-setup)
(setq jedi:setup-keys t)
(add-hook 'ein:connect-mode-hook 'ein:jedi-setup)
(add-hook 'python-mode-hook 'my-jedi-server-setup)
(setq jedi:setup-keys t)
(add-hook 'python-mode-hook 'jedi:setup)
(eval-when-compile (require 'jedi nil t))
(setq jedi:setup-keys t)
(setq jedi:key-show-doc (kbd "C-c D"))
(jedi-mode 1)


;; Jedi Direx
(require 'jedi-direx)
(eval-after-load "python"
  '(define-key python-mode-map "\C-cx" 'jedi-direx:pop-to-buffer))
(add-hook 'jedi-mode-hook 'jedi-direx:setup)



;;anything
(require 'anything)
(require 'anything-ipython)
(when (require 'anything-show-completion nil t)
  (use-anything-show-completion 'anything-ipython-complete
                                '(length initial-pattern)))
(global-set-key
 (kbd "M-p")
 'anything-ipython-complete)



























'(
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


;;pdb setup, note the python version
(setq pdb-path '/usr/lib/python2.7/pdb.py
      gud-pdb-command-name (symbol-name pdb-path))
(defadvice pdb (before gud-query-cmdline activate)
  "Provide a better default command line when called interactively."
  (interactive
   (list (gud-query-cmdline pdb-path
			    (file-name-nondirectory buffer-file-name)))))
)
)
