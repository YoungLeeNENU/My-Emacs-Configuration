(add-to-list 'load-path
			 "~/.emacs.d/elisp")
(add-to-list 'load-path
			 "~/.emacs.d/ecb-snap")

;; fci-mode
;;(require 'fill-column-indicator)
;;(setq fci-rule-width 1)
;;(setq fci-rule-color "dark red")
;;(add-hook 'c-mode-hook 'fci-mode)
;;(add-hook 'python-mode-hook 'fci-mode)
;;(add-hook 'java-mode-hook 'fci-mode)
;;(add-hook 'after-change-major-mode-hook 'fci-mode)
;;(define-globalized-minor-mode global-fci-mode fci-mode (lambda () (fci-mode 1)))
;;(global-fci-mode 1)
;;(setq fci-rule-column 91)

;;highlight-indentation
;;(require 'highlight-indentation)
;;(set-face-background 'highlight-indentation-face "dark red")
;;(set-face-background 'highlight-indentation-current-column-face "dark red")
;;(add-hook 'c-mode-hook 'highlight-indentation)
;;(add-hook 'python-mode-hook 'highlight-indentation)
;;(add-hook 'java-mode-hook 'highlight-indentation)

;;cscope
(require 'cc-mode)
(load-file "/home/neo/.emacs.d/packages/cscope-15.8a/contrib/xcscope/xcscope.el")
(require 'xcscope)
(define-key global-map [(meta f3)]  'cscope-set-initial-directory)
(define-key global-map [(meta f4)]  'cscope-unset-initial-directory)
(define-key global-map [(meta f5)]  'cscope-find-this-symbol)
(define-key global-map [(meta f6)]  'cscope-find-global-definition)
(define-key global-map [(meta f7)]  'cscope-find-global-definition-no-prompting)
(define-key global-map [(meta f8)]  'cscope-pop-mark)
(define-key global-map [(meta f9)]  'cscope-next-symbol)
(define-key global-map [(meta f10)] 'cscope-next-file)
(define-key global-map [(meta f11)] 'cscope-prev-symbol)
(define-key global-map [(meta f12)] 'cscope-prev-file)
(define-key global-map [(control f9)]     'cscope-display-buffer)
(define-key global-map [(control F10)]    'Cscope-Display-buffer-toggle)

(setq cscope-do-not-update-database t)

;;打开代码段
(global-set-key (kbd "C-c +") 'hs-show-block)
;;折叠代码段
(global-set-key (kbd "C-c -") 'hs-hide-block)


;;标记和跳转
;;标记
(global-set-key [(control <)] 'ska-point-to-register)
;;跳转
(global-set-key [(control \,)] 'ska-jump-to-register)
(defun ska-point-to-register()
  "Store cursorposition _fast_ in a register.
  Use ska-jump-to-register to jump back to the stored
  position."
  (interactive)
  (setq zmacs-region-stays t)
  (point-to-register 8))

(defun ska-jump-to-register()
  "Switches between current cursorposition and position
  that was stored with ska-point-to-register."
  (interactive)
  (setq zmacs-region-stays t)
  (let ((tmp (point-marker)))
    (jump-to-register 8)
    (set-register 8 tmp)))


;;括号匹配
(defun my-c-mode-auto-pair ()
  (interactive)
  (make-local-variable 'skeleton-pair-alist)
  (setq skeleton-pair-alist '(
							  (?` ?` _ "''")
							  (?\( ? _ " )")
							  (?\[ ? _ " ]")
							  (?{ \n > _ \n ?} >)))
  (setq skeleton-pair t)
  (local-set-key (kbd "(") 'skeleton-pair-insert-maybe)
  (local-set-key (kbd "{") 'skeleton-pair-insert-maybe)
  (local-set-key (kbd "`") 'skeleton-pair-insert-maybe)
  (local-set-key (kbd "[") 'skeleton-pair-insert-maybe))
(add-hook 'c-mode-hook 'my-c-mode-auto-pair)
(add-hook 'c++-mode-hook 'my-c-mode-auto-pair)
(add-hook 'c-mode-hook
		  '(lambda ()
			 (c-set-style "k&r")))

'(
;;ECB
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(ecb-key-map (quote ("C-c ." (t "fh" ecb-history-filter) (t "fs" ecb-sources-filter) (t "fm" ecb-methods-filter) (t "fr" ecb-methods-filter-regexp) (t "ft" ecb-methods-filter-tagclass) (t "fc" ecb-methods-filter-current-type) (t "fp" ecb-methods-filter-protection) (t "fn" ecb-methods-filter-nofilter) (t "fl" ecb-methods-filter-delete-last) (t "ff" ecb-methods-filter-function) (t "p" ecb-nav-goto-previous) (t "n" ecb-nav-goto-next) (t "lc" ecb-change-layout) (t "lr" ecb-redraw-layout) (t "lw" ecb-toggle-ecb-windows) (t "lt" ecb-toggle-layout) (t "s" ecb-window-sync) (t "r" ecb-rebuild-methods-buffer) (t "a" ecb-toggle-auto-expand-tag-tree) (t "x" ecb-expand-methods-nodes) (t "h" ecb-show-help) (nil "C-c e" ecb-goto-window-edit-last) (t "g1" ecb-goto-window-edit1) (t "g2" ecb-goto-window-edit2) (t "gc" ecb-goto-window-compilation) (nil "C-c 1" ecb-goto-window-directories) (nil "C-c 2" ecb-goto-window-sources) (nil "C-c 3" ecb-goto-window-methods) (nil "C-c 4" ecb-goto-window-history) (t "ga" ecb-goto-window-analyse) (t "gb" ecb-goto-window-speedbar) (t "md" ecb-maximize-window-directories) (t "ms" ecb-maximize-window-sources) (t "mm" ecb-maximize-window-methods) (t "mh" ecb-maximize-window-history) (t "ma" ecb-maximize-window-analyse) (t "mb" ecb-maximize-window-speedbar) (t "e" eshell) (t "o" ecb-toggle-scroll-other-window-scrolls-compile) (t "\\" ecb-toggle-compile-window) (t "/" ecb-toggle-compile-window-height) (t "," ecb-cycle-maximized-ecb-buffers) (t "." ecb-cycle-through-compilation-buffers))))
 '(ecb-options-version "2.40"))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(default ((t (:inherit nil :stipple nil :background "black" :foreground "#00ff00" :inverse-video nil :box nil :strike-through nil :overline nil :underline nil :slant normal :weight normal :height 111 :width normal :foundry "microsoft" :family "YaHei Consolas Hybrid")))))

(setq stack-trace-on-error t)
(require 'ecb)
;;(ecb-activate)
(ecb-byte-compile)
(setq ecb-tip-of-the-day nil)

(defun my-ecb-active-or-deactive ()
  (interactive)
  (if ecb-minor-mode
      (ecb-deactivate)
	(ecb-activate)))

(global-set-key (kbd "C-c 0") 'my-ecb-active-or-deactive)

;; 没有任中任何区域时，注释、反注释作用于当前行，否则作用于
;; 选中区域
;;(defadvice comment-or-uncomment-region (before slickcomment activate compile)
;;  "When called interactively with no active region, toggle comment on current line instead."
;;  (interactive
;;   (if mark-active (list (region-beginning) (region-end))
;;     (list (line-beginning-position)
;;           (line-beginning-position 2)))))
;;(define-key c-mode-base-map (kbd "C-;") 'comment-or-uncomment-region)
;;(define-key python-mode-map (kbd "C-;") 'comment-or-uncomment-region)
)
