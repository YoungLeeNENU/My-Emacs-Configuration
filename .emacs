;; -*- Emacs-Lisp -*-
(setq user-full-name "Young Lee")
(setq user-mail-address "youngleemails@gmail.com")

;; 加载目录
(add-to-list 'load-path "~/.emacs.d/init")

;; 分别加载使用不同 feature 的配置文件
(load "my-basic")
(load "my-dired")
(load "my-face")
(load "my-general-pro")
(load "my-c-pro")
(load "my-lisp")
(load "my-emms.el")
(load "my-ruby.el")
(load "my-python")
(load "my-org")
(load "my-latex")
(load "my-perl")
(load "my-lua")
(load "my-php")
;; (load "my-w3m")
;; (load "my-elpa")
;; (load "my-sql.el")

(require 'package)
(add-to-list 'package-archives 
			 '("marmalade" .
			   "http://marmalade-repo.org/packages/"))
(package-initialize)

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(custom-safe-themes (quote ("0ebe0307942b6e159ab794f90a074935a18c3c688b526a2035d14db1214cf69c" "7d4d00a2c2a4bba551fcab9bfd9186abe5bfa986080947c2b99ef0b4081cb2a6" "1989847d22966b1403bab8c674354b4a2adf6e03e0ffebe097a6bd8a32be1e19" "ce79400f46bd76bebeba655465f9eadf60c477bd671cbcd091fe871d58002a88" "53c542b560d232436e14619d058f81434d6bbcdc42e00a4db53d2667d841702e" "c7359bd375132044fe993562dfa736ae79efc620f68bab36bd686430c980df1c" "9d66964cd05278ca9a9b960c14ae9ed0b88db94d56a55d7ad0c3d5b7732da505" "479b72b3b0b431c6bbeb394f07729c43135f325e2435306a96caecd2dcba2436" default)))
 '(ecb-key-map (quote ("C-c ." (t "fh" ecb-history-filter) (t "fs" ecb-sources-filter) (t "fm" ecb-methods-filter) (t "fr" ecb-methods-filter-regexp) (t "ft" ecb-methods-filter-tagclass) (t "fc" ecb-methods-filter-current-type) (t "fp" ecb-methods-filter-protection) (t "fn" ecb-methods-filter-nofilter) (t "fl" ecb-methods-filter-delete-last) (t "ff" ecb-methods-filter-function) (t "p" ecb-nav-goto-previous) (t "n" ecb-nav-goto-next) (t "lc" ecb-change-layout) (t "lr" ecb-redraw-layout) (t "lw" ecb-toggle-ecb-windows) (t "lt" ecb-toggle-layout) (t "s" ecb-window-sync) (t "r" ecb-rebuild-methods-buffer) (t "a" ecb-toggle-auto-expand-tag-tree) (t "x" ecb-expand-methods-nodes) (t "h" ecb-show-help) (nil "C-c e" ecb-goto-window-edit-last) (t "g1" ecb-goto-window-edit1) (t "g2" ecb-goto-window-edit2) (t "gc" ecb-goto-window-compilation) (nil "C-c 1" ecb-goto-window-directories) (nil "C-c 2" ecb-goto-window-sources) (nil "C-c 3" ecb-goto-window-methods) (nil "C-c 4" ecb-goto-window-history) (t "ga" ecb-goto-window-analyse) (t "gb" ecb-goto-window-speedbar) (t "md" ecb-maximize-window-directories) (t "ms" ecb-maximize-window-sources) (t "mm" ecb-maximize-window-methods) (t "mh" ecb-maximize-window-history) (t "ma" ecb-maximize-window-analyse) (t "mb" ecb-maximize-window-speedbar) (t "e" eshell) (t "o" ecb-toggle-scroll-other-window-scrolls-compile) (t "\\" ecb-toggle-compile-window) (t "/" ecb-toggle-compile-window-height) (t "," ecb-cycle-maximized-ecb-buffers) (t "." ecb-cycle-through-compilation-buffers))))
 '(ecb-options-version "2.40")
 '(org-refile-targets (quote (("inbox.org" :level . 1) ("canceled.org" :level . 1) ("finished.org" :level . 1)))))

(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(default ((t (:inherit nil :stipple nil :inverse-video nil :box nil :strike-through nil :overline nil :underline nil :slant normal :weight normal :height 113 :width normal :foundry "unknown" :family "Monaco")))))
