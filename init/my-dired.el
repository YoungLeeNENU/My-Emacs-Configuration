(add-to-list 'load-path "~/.emacs.d/elisp")
(add-to-list 'load-path "~/.emacs.d/plugins/direx-el")

;;递归的删除目录
(setq dired-recursive-deletes t)

;;dired-x
(add-hook 'dired-load-hook
	  (function (lambda () (load "dired-x"))))

;; dired+ 增强模式
(require 'dired+)

;; 使用图形化的 sort menu
(add-hook 'dired-load-hook
	  (lambda () (require 'dired-sort-menu)))

;; 能够在 dired 里面使用只对文件名部分执行 i-search
(require 'dired-isearch)
(define-key dired-mode-map
  (kbd "C-s")
  'dired-isearch-forward)
(define-key dired-mode-map
  (kbd "C-r")
  'dired-isearch-backward)
(define-key dired-mode-map
  (kbd "ESC C-s")
  'dired-isearch-forward-regexp)
(define-key dired-mode-map
  (kbd "ESC C-r")
  'dired-isearch-backward-regexp)

;; 输入文件名的第一个字母跳转到文件
(require 'dired-view)
;; (add-hook 'dired-mode-hook 'dired-view-minor-mode-on)
(define-key dired-mode-map
  (kbd ";")
  'dired-view-minor-mode-toggle)
(define-key dired-mode-map
  (kbd ":")
  'dired-view-minor-mode-dired-toggle)


;; Direx
(require 'direx)
(global-set-key (kbd "C-x C-i") 'direx:jump-to-directory)
