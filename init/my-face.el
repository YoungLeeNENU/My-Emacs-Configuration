(add-to-list 'load-path
			 "~/.emacs.d/elisp")
(add-to-list 'load-path
			 "~/.emacs.d/color-theme-6.6.0")
(add-to-list 'load-path
			 "~/.emacs.d/plugins/solarized/emacs-colors-solarized")
(add-to-list 'load-path
			 "~/.emacs.d/plugins/emacs-live")
(add-to-list 'load-path
			 "~/.emacs.d/packages/emacs-color-themes")

;; han fonts
(dolist (charset '(kana han symbol cjk-misc bopomofo))
  (set-fontset-font (frame-parameter nil 'font)
                    charset (font-spec :family "Vera Sans YuanTi Medium"
                                       :size 15)))

;; (require 'oneonone)

(require 'emacs-color-themes)
(load-theme 'mccarthy t)
;; (load-theme 'dorsey t)

;;fullscreen
(require 'fullscreen)

;; (require 'color-theme-solarized)

;;color-theme
(add-to-list 'load-path "~/.emacs.d/color-theme-6.6.0/")
;;(require 'color-theme)
(eval-after-load "color-theme"
  '(progn
     (color-theme-initialize)))

;;(require 'monokai-theme)
(require 'color-theme)

(defun color-theme-monokai ()
  "Monokai color theme for Emacs by Operator.
Based on the TextMate theme Monokai"
  (interactive)
  (color-theme-install
   '(color-theme-monokai
     ((foreground-color . "#F8F8F2")
      (background-color . "#272822")
      (background-mode . dark)
      (cursor-color . "#73d216") ; medium chameleon
      (mouse-color . "#73d216"))

     ;;; Standard font lock faces
     (default ((t (nil))))
     (font-lock-comment-face ((t (:foreground "#75715E")))) ; dark aluminum
     (font-lock-comment-delimiter-face ((t (:foreground "#75715E")))) ; dark aluminum
     (font-lock-doc-face ((t (:foreground "#75715E")))) ; plum
     (font-lock-doc-string-face ((t (:foreground "#75715E")))) ; plum
     (font-lock-string-face ((t (:foreground "#E6DB74")))) ; plum
     (font-lock-keyword-face ((t (:foreground "#F92672")))) ; light sky blue
     (font-lock-builtin-face ((t (:foreground "#855c1b")))) ; med-dark chocolate
     (font-lock-function-name-face ((t (:foreground "#A6E22E")))) ; dark butter
     (font-lock-variable-name-face ((t (:foreground "#FD971F"))))
     (font-lock-preprocessor-face ((t (:foreground "#66D9EF")))) ; aluminum
     (font-lock-constant-face ((t (:foreground "#4e9a06")))) ; dark chameleon
     (font-lock-type-face ((t (:foreground "#66D9EF")))) ; light plum
     (font-lock-warning-face ((t (:bold t :foreground "#cc0000")))) ; scarlet red

     ;; Search
     (isearch ((t (:foreground "#080808" :background "#edd400"))))
     (isearch-lazy-highlight-face ((t (:foreground "#080808" :background "#75715E"))))

     ;; Emacs Interface
     (fringe ((t (:background "#0f0f0f"))))
     (border ((t (:background "#0f0f0f"))))
     (mode-line ((t (:background "#1f1f1f" :foreground "#eeeeec"))))
     (mode-line-buffer-id ((t (:background "#1f1f1f" :foreground "#eeeeec"))))
     (mode-line-inactive ((t (:background "#1f1f1f" :foreground "#888a85"))))
     (minibuffer-prompt ((t (:foreground "#729fcf")))) ; light sky blue
     (region ((t (:background "#49483E"))))

     ;; Parenthesis matching
     (show-paren-match-face ((t (:foreground "#2e3436" :background "#3E3D32"))))
     (show-paren-mismatch-face ((t (:foreground "#2e3436" :background "#ef2929"))))

     ;; Calendar
     (holiday-face ((t (:foreground "#cc0000")))) ; dark scarlet red

     ;; Info
     (info-xref ((t (:foreground "#729fcf")))) ; light sky blue
     (info-xref-visited ((t (:foreground "#ad7fa8")))) ; light plum

     ;;; AUCTeX
     (font-latex-sectioning-5-face ((t (:foreground "#c4a000" :bold t)))) ; dark butter
     (font-latex-bold-face ((t (:foreground "#4e9a06" :bold t)))) ; dark chameleon
     (font-latex-italic-face ((t (:foreground "#4e9a06" :italic t)))) ; dark chameleon
     (font-latex-math-face ((t (:foreground "#855c1b")))) ; med-dark chocolate
     (font-latex-string-face ((t (:foreground "#77507b")))) ; plum
     (font-latex-warning-face ((t (:foreground "#cc0000")))) ; dark scarlet red
     (font-latex-slide-title-face ((t (:foreground "#c4a000")))) ; dark butter
     )))

(provide 'color-theme-monokai)
;; (color-theme-monokai)

;;monokai ends

;;窗口透明化
(set-frame-parameter (selected-frame) 'alpha (list 100 0))
(add-to-list 'default-frame-alist (cons 'alpha (list 100 0)))
(defun transform-window (a ab)
  (set-frame-parameter (selected-frame) 'alpha (list a ab))
  (add-to-list 'default-frame-alist (cons 'alpha (list a ab))))
(global-set-key [(f5)] (lambda()
                         (interactive)
                         (transform-window 65 0)))
(global-set-key [(f6)] (lambda()
                         (interactive)
                         (transform-window 70 0)))
(global-set-key [(f7)] (lambda()
                         (interactive)
                         (transform-window 80 0)))
(global-set-key [(f8)] (lambda()
                         (interactive)
                         (transform-window 100 100)))

;;window number
;;C-x C-j + window number
(require 'window-number)
(autoload 'window-number-mode "window-number"
  "A global minor mode that enables selection of windows according to
 numbers with the C-x C-j prefix.  Another mode,
 `window-number-meta-mode' enables the use of the M- prefix."
  t)

(autoload 'window-number-meta-mode "window-number"
  "A global minor mode that enables use of the M- prefix to select
 windows, use `window-number-mode' to display the window numbers in
 the mode-line."
  t)
(window-number-mode)
(window-number-meta-mode 1)

;;(defun fullscreen ()
;;  (interactive)
;;  (set-frame-parameter nil 'fullscreen
;;					   (if (frame-parameter nil 'fullscreen) nil 'fullboth)))

;;时间显示
(display-time-mode 1)
;;24小时制
(setq display-time-24hr-format t)
;;时间显示包括日期和具体时间
;;(setq display-time-day-and-date t)
;;显示时间的格式
;;(setq display-time-format "%H:%M")
;;语法高亮
(global-font-lock-mode t)
;;无响铃
(setq visible-bell t)
;;无菜单栏
(menu-bar-mode 0)
;;鼠标设置
(mouse-avoidance-mode'animate)
(setq mouse-yank-at-point t)
(transient-mark-mode t)
;;高亮当前行
(global-hl-line-mode t)
;;行号显示
(global-linum-mode t)
;;切换buffer
(define-key global-map "\C-z" 'switch-to-buffer)
;;支持全局复制粘贴
(setq x-select-enable-clipboard t)
;;无滚动条
(scroll-bar-mode 0)
;;无工具栏
(tool-bar-mode 0)
;;列号显示
(column-number-mode t)
;;括号匹配
(show-paren-mode t)
;;C-k删除整行
;;(setq-default kill-whole-line t)
;;把yes设置为y
(fset 'yes-or-no-p 'y-or-n-p)
;;C-c u为撤销
(global-set-key (kbd "C-c u") 'undo)
;;无备份文件
(setq make-backup-files nil)
;;不产生临时文件
(setq-default make-backup-files nil)
;;C-h为向前删除一个字符
(global-set-key (kbd "C-h") 'delete-backward-char)
;;C-q为向前删除一个单词

;;可以递归的使用 minibuffer。
(setq enable-recursive-minibuffers t)

;;eshell中使用clear
(defun eshell/clear ()
  (interactive)
  (let ((inhibit-read-only t))
    (erase-buffer)))

;;滚动页面时比较舒服，不要整页的滚动
(setq scroll-step 1
      scroll-margin 3
      scroll-conservatively 10000)

;;启动最大化
(defun toggle-fullscreen ()
  (interactive)

  (x-send-client-message nil 0 nil "_NET_WM_STATE" 32
                         '(2 "_NET_WM_STATE_MAXIMIZED_VERT" 0))
  (x-send-client-message nil 0 nil "_NET_WM_STATE" 32
                         '(2 "_NET_WM_STATE_MAXIMIZED_HORZ" 0))
  (fullscreen))
(toggle-fullscreen)

;;全屏
(global-set-key (kbd "M-s f") 'fullscreen)

;; emacs live
