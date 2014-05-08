(add-to-list 'load-path
	     "~/.emacs.d/packages/auctex-11.86")

(load "auctex.el" nil t t)
(load "preview-latex.el" nil t t)
(mapc (lambda (mode)
        (add-hook 'LaTeX-mode-hook mode))
      (list 'auto-fill-moden
	    'LaTeX-math-mode
	    'turn-on-reftex
	    'linum-mode))
(add-hook'LaTeX-mode-hook
 (lambda ()
   (setq TeX-auto-untabifyt    ; remove all tabs before saving
	 TeX-engine'xetex      ; use xelatex default
	 TeX-show-compilation t) ; display compilation windows
   (TeX-global-PDF-modet)      ; PDF mode enable, not plain
   (setq TeX-save-query nil)
   (imenu-add-menubar-index)
   (define-key LaTeX-mode-map (kbd "TAB")'TeX-complete-symbol)))

(eval-after-load "tex"
  '(TeX-add-style-hook "beamer" 'my-beamer-mode))

(setq TeX-region "regionsje")
(defun my-beamer-mode ()
  "My adds on for when in beamer."

  ;; when in a Beamer file I want to use pdflatex.
  ;; Thanks to Ralf Angeli for this.
  (TeX-PDF-mode 1)                      ;turn on PDF mode.

  ;; Tell reftex to treat \lecture and \frametitle as section commands
  ;; so that C-c = gives you a list of frametitles and you can easily
  ;; navigate around the list of frames.
  ;; If you change reftex-section-level, reftex needs to be reset so that
  ;; reftex-section-regexp is correctly remade.
  (require 'reftex)
  (set (make-local-variable 'reftex-section-levels)
       '(("lecture" . 1) ("frametitle" . 2)))
  (reftex-reset-mode)

  ;; add some extra functions.
  (define-key LaTeX-mode-map "\C-cf" 'beamer-template-frame)
  (define-key LaTeX-mode-map "\C-\M-x" 'tex-frame))

(defun tex-frame ()
  "Run pdflatex on current frame.  
Frame must be declared as an environment."
  (interactive)
  (let (beg)
    (save-excursion
      (search-backward "\\begin{frame}")
      (setq beg (point))
      (forward-char 1)
      (LaTeX-find-matching-end)
      (TeX-pin-region beg (point))
      (letf (( (symbol-function 'TeX-command-query) (lambda (x) "LaTeX")))
        (TeX-command-region)))))


(defun beamer-template-frame ()
  "Create a simple template and move point to after \\frametitle."
  (interactive)
  (LaTeX-environment-menu "frame")
  (insert "\\frametitle{}")
  (backward-char 1))
