(add-to-list 'load-path
			 "~/.emacs.d/elisp")
;;递归的删除目录
(setq dired-recursive-deletes t)
;;dired-x
(add-hook 'dired-load-hook
		  (function (lambda () (load "dired-x"))))
;;dired+增强模式
(require 'dired+)
;;使用图形化的sort menu
(require 'dired-sort-menu+)
;;能够在dired里面使用只对文件名部分执行i-search
(require 'dired-isearch)
