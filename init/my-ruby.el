(add-to-list 'load-path
			 "~/.emacs.d/elisp")
(add-to-list 'load-path
			 "~/.emacs.d/rspec")

;; rspec-mode
(require 'rspec-mode)
(eval-after-load 'rspec-mode
  '(rspec-install-snippets))
(add-hook 'ruby-mode-hook #'rspec-mode 1)

;; ruby block
(require 'ruby-block)
(ruby-block-mode t)

;; ri
;;; (require 'ri)

;; yari
;; You can use C-u M-x yari to reload all completion targets.
(require 'yari)
;;; (defun ri-bind-key ()
;;;   (local-set-key [f1] 'yari))
(defun ri-bind-key ()
  (local-set-key [(control ?c) ?r] 'yari-anything))

(add-hook 'ruby-mode-hook 'ri-bind-key)

;; ruby-test
(require 'ruby-test)

;; autotest
(require 'autotest)
(defadvice rspec-compile (around rspec-compile-around)
  "Use BASH shell for running the specs because of ZSH issues."
  (let ((shell-file-name "/bin/bash"))
    ad-do-it))
(ad-activate 'rspec-compile)

;; RSENSE
(setq rsense-home "/home/lee/opt/rsense-0.3")
(add-to-list 'load-path (concat rsense-home "/etc"))
(require 'rsense)
(add-hook 'ruby-mode-hook
          (lambda ()
            (local-set-key (kbd "C-c .") 'rsense-type-help)))
(add-hook 'ruby-mode-hook
          (lambda ()
            (add-to-list 'ac-sources 'ac-source-rsense-method)
            (add-to-list 'ac-sources 'ac-source-rsense-constant)))

;; flymake ruby
(require 'flymake)
(set-face-background 'flymake-errline "red4")
(set-face-background 'flymake-warnline "dark slate blue")
;; Invoke ruby with '-c' to get syntax checking
(defun flymake-ruby-init ()
  (let* ((temp-file   (flymake-init-create-temp-buffer-copy
                       'flymake-create-temp-inplace))
		 (local-file  (file-relative-name
                       temp-file
                       (file-name-directory buffer-file-name))))
    (list "ruby" (list "-c" local-file))))
(push '(".+\\.rb$" flymake-ruby-init) flymake-allowed-file-name-masks)
(push '("Rakefile$" flymake-ruby-init) flymake-allowed-file-name-masks)
(push '("^\\(.*\\):\\([0-9]+\\): \\(.*\\)$" 1 2 nil 3) flymake-err-line-patterns)
(add-hook 'ruby-mode-hook
          '(lambda ()
			 ;; Don't want flymake mode for ruby regions in rhtml files and also on read only files
			 (if (and (not (null buffer-file-name)) (file-writable-p buffer-file-name))
				 (flymake-mode))))

;; folding mode
(require 'folding)
;;; (autoload 'folding-mode          "folding" "Folding mode" t)
;;; (autoload 'turn-off-folding-mode "folding" "Folding mode" t)
;;; (autoload 'turn-on-folding-mode  "folding" "Folding mode" t)
(load "folding" 'nomessage 'noerror)
(folding-mode-add-find-file-hook)
(folding-add-to-marks-list 'ruby-mode "#{{{" "#}}}" nil t)
;;; (setq folding-default-keys-function
;;;       'folding-bind-backward-compatible-keys)
;;; (if (load "folding" 'nomessage 'noerror)
;;;     (folding-mode-add-find-file-hook))
