(add-to-list 'load-path
			 "~/.emacs.d/plugins/gccsense-0.1/etc")
(add-to-list 'load-path
			 "~/.emacs.d/packages/auto-complete-clang")

;; Add further minor-modes to be enabled by semantic-mode.
;; See doc-string of `semantic-default-submodes' for other things
;; you can use here.
(add-to-list
 'semantic-default-submodes 'global-semantic-idle-summary-mode t)
(add-to-list
 'semantic-default-submodes 'global-semantic-idle-completions-mode t)

(require 'cc-mode)

;; Enable Semantic
(semantic-mode 1)

;; Enable EDE (Project Management) features
(global-ede-mode 1)

;;TAB键设置
(setq indent-tabs-mode nil)
(setq default-tab-width 4)
;; (setq tab-width 4)
(setq tab-stop-list ())
(setq-default c-basic-offset 4 c-default-style "linux")
(setq-default tab-width 4 indent-tabs-mode t)
(define-key c-mode-base-map (kbd "C-j") 'newline-and-indent)
(require 'autopair)
(autopair-global-mode 1)
(setq autopair-autowrap t)

;; 'auto-complete-clang
(require 'auto-complete-clang)
(define-key c-mode-map (kbd "M-i") 'ac-complete-clang)
(define-key c++-mode-map (kbd "M-i") 'ac-complete-clang)
;; (setq ac-auto-start nil)
;; (setq ac-quick-help-delay 0.5)
;; ;; (ac-set-trigger-key "TAB")
;; ;; (define-key ac-mode-map  [(control tab)] 'auto-complete)
;; (define-key ac-mode-map  [(control tab)] 'auto-complete)
;; (defun my-ac-config ()
;;   (setq-default
;;    ac-sources
;;    '(ac-source-abbrev ac-source-dictionary
;;                       ac-source-words-in-same-mode-buffers))
;;   (add-hook 'emacs-lisp-mode-hook 'ac-emacs-lisp-mode-setup)
;;   ;; (add-hook 'c-mode-common-hook 'ac-cc-mode-setup)
;;   (add-hook 'ruby-mode-hook 'ac-ruby-mode-setup)
;;   (add-hook 'css-mode-hook 'ac-css-mode-setup)
;;   (add-hook 'auto-complete-mode-hook 'ac-common-setup)
;;   (global-auto-complete-mode t))
;; (defun my-ac-cc-mode-setup ()
;;   (setq ac-sources (append '(ac-source-clang ac-source-yasnippet)
;;                            ac-sources)))
;; (add-hook 'c-mode-common-hook 'my-ac-cc-mode-setup)
;; ;; ac-source-gtags
;; (my-ac-config)

(defconst my-c-style
  '((c-tab-always-indent        . t)
    (c-comment-only-line-offset . 4)
    (c-hanging-braces-alist     . ((substatement-open after)
                                   (brace-list-open)))
    (c-hanging-colons-alist     . ((member-init-intro before)
                                   (inher-intro)
                                   (case-label after)
                                   (label after)
                                   (access-label after)))
    (c-cleanup-list             . (scope-operator
                                   empty-defun-braces
                                   defun-close-semi))
    (c-offsets-alist            . ((arglist-close . c-lineup-arglist)
                                   (substatement-open . 0)
                                   (case-label        . 4)
                                   (block-open        . 0)
                                   (knr-argdecl-intro . -)))
    (c-echo-syntactic-information-p . t))
  "My C Programming Style")

(setq c-offsets-alist '((member-init-intro . ++)))

(defun my-c-mode-common-hook ()
  (hs-minor-mode)
  (c-add-style "PERSONAL" my-c-style t)
  (setq tab-width 4
        indent-tabs-mode nil)
  (c-toggle-auto-hungry-state 1)
  (define-key c-mode-base-map "/C-m" 'c-context-line-break)
  )

(add-hook 'c-mode-common-hook 'my-c-mode-common-hook)

;;智能编译
(require 'smart-compile)
;;设置C-c s为智能编译
(global-set-key (kbd "C-c o") 'smart-compile)
(defun smart-compile()
  "比较智能的 C/C++ 编译命令
如果当前目录有 Makefile 则用 make -k 编译，否则，如果是
处于 c-mode ，就用 gcc -Wall 编译，如果是 c++-mode 就用 g++ -Wall
编译"
  (interactive)
  ;; 查找 Makefile
  (let ((candidate-make-file-name
         '("makefile" "Makefile" "GNUmakefile"))
        (command nil))
    (if (not (null
              (find t candidate-make-file-name :key
                    '(lambda (f) (file-readable-p f)))))
        (setq command "make -k ")
	  ;; 没有找到 Makefile ，查看当前 mode 是否是已知的可编译的模式
	  (if (null (buffer-file-name (current-buffer)))
		  (message "Buffer not attached to a file, won't compile!")
		;; (if (eq major-mode 'c-mode)
		;; 	(setq command
		;; 		  (concat "gcc -Wall -O2 -o "
		;; 				  (file-name-sans-extension
		;; 				   (file-name-nondirectory buffer-file-name))
		;; 				  " "
		;; 				  (file-name-nondirectory buffer-file-name)
		;; 				  " -g -lm -std=c99"))
		;;   (if (eq major-mode 'c++-mode)
		;; 	  (setq command
		;; 			(concat "g++ -Wall -O2 -o "
		;; 					(file-name-sans-extension
		;; 					 (file-name-nondirectory
        ;;                       buffer-file-name))
		;; 					" "
		;; 					(file-name-nondirectory buffer-file-name)
		;; 					" -g -lm "))
		;; 	(message "Unknow mode, won't compile!")))
        
        (cond ((eq major-mode 'c-mode)
               (setq command
				  (concat "gcc -Wall -O2 -o "
						  (file-name-sans-extension
						   (file-name-nondirectory buffer-file-name))
						  " "
						  (file-name-nondirectory buffer-file-name)
						  " -g -lm -std=c99")))
              ((eq major-mode 'c++-mode)
               (setq command
					(concat "g++ -Wall -O2 -o "
							(file-name-sans-extension
							 (file-name-nondirectory
                              buffer-file-name))
							" "
							(file-name-nondirectory buffer-file-name)
							" -g -lm ")))
              ((eq major-mode 'java-mode)
               (setq command
					(concat "javac "
							(file-name-nondirectory buffer-file-name)
							)))
              (else (message "Unknow mode, won't compile!")))))
    (if (not (null command))
        (let ((command
               (read-from-minibuffer "Compile command: " command)))
          (compile command)))))

;;快速include一个系统头文件
;;安装 abbrev
(mapc
 (lambda (mode)
   (define-abbrev-table mode '(
                               ("inc" "" skeleton-include 1)
                               )))
 '(c-mode-abbrev-table c++-mode-abbrev-table))

;; 输入 inc , 可以自动提示输入文件名称,可以自动补全.
(define-skeleton skeleton-include
  "generate include<>" ""
  > "#include <"
  (completing-read "Include File:"
                   (mapcar #'(lambda (f) (list f ))
                           (apply 'append
                                  (mapcar
                                   #'(lambda (dir)
                                       (directory-files dir))
                                   (list "/usr/include"
                                         "/usr/local/include"
                                         ;;"/usr/include/g++-3"
                                         )))))
  ">")

(defvar wcy-c/c++-hightligh-included-files-key-map nil)
(if wcy-c/c++-hightligh-included-files-key-map
    nil
  (setq wcy-c/c++-hightligh-included-files-key-map
        (make-sparse-keymap))
  (define-key wcy-c/c++-hightligh-included-files-key-map
    (kbd "<RET>") 'find-file-at-point))

(defun wcy-c/c++-hightligh-included-files ()
  (interactive)
  (when (or (eq major-mode 'c-mode)
            (eq major-mode 'c++-mode))
    (save-excursion
      (goto-char (point-min))
      ;; remove all overlay first
      (mapc (lambda (ov)
              (if (overlay-get ov
                               'wcy-c/c++-hightligh-included-files)
                             (delete-overlay ov)))
            (overlays-in (point-min) (point-max)))
      (while (re-search-forward "^#include[ \t]+[\"<]\\(.*\\)[\">]"
                                nil t nil)
        (let* ((begin  (match-beginning 1))
               (end (match-end 1))
               (ov (make-overlay begin end)))
          (overlay-put ov
                       'wcy-c/c++-hightligh-included-files t)
          (overlay-put ov
                       'keymap
                       wcy-c/c++-hightligh-included-files-key-map)
          (overlay-put ov
                       'face
                       'underline))))))
;; 这不是一个好办法，也可以把它加载到 c-mode-hook or c++-mode-hook 中。
(setq wcy-c/c++-hightligh-included-files-timer
      (run-with-idle-timer 4 t 'wcy-c/c++-hightligh-included-files))

;; online search
(require 'online-search)
(global-set-key [(control c) (s)] 'online-search)

(require 'c-eldoc)
;; add in your commonly used packages/include directories here, for
;; example, SDL or OpenGL. this shouldn't slow down cpp, even if
;; you've got a lot of them
(setq c-eldoc-includes "`pkg-config gtk+-2.0 --cflags` -I./ -I../ ")
(load "c-eldoc")
(add-hook 'c-mode-hook 'c-turn-on-eldoc-mode)

(require 'c-toggle-dot-pointer)

;; gccsense
(require 'gccsense)

(require 'c-toggle-dot-pointer)

;; (require 'zjl-hl)
;; ;; to disable, call (zjl-hl-disable-global-all-modes)
;; (zjl-hl-enable-global-all-modes)

(require 'member-functions)
(setq mf--source-file-extension "cpp")

(require 'hideif)
(setq hide-ifdef-initially nil)
(add-hook 'c-mode-common-hook
          (lambda ()
            (hide-ifdef-mode 1)))
(add-hook 'c++-mode-common-hook
          (lambda ()
            (hide-ifdef-mode 1)))
(defun my-hide-if-0 ()
  (interactive)
  (require 'hideif)
  (save-excursion
    (goto-char (point-min))
    (while
        (re-search-forward "^[ \t]*#if[ \t]*0" nil t)
      (hide-ifdef-block))))
(add-hook 'c-mode-hook 'my-hide-if-0)
(add-hook 'c++-mode-hook 'my-hide-if-0)

(add-hook 'c-mode-common-hook
          (lambda ()
            (define-key c-mode-base-map
              (kbd "M-?")
              'my-hif-toggle-block)))

;;; for hideif
(defun my-hif-toggle-block ()
  (interactive)
  (require 'hideif)
  (let* ((top-bottom (hif-find-ifdef-block))
         (top (car top-bottom)))
    (goto-char top)
    (hif-end-of-line)
    (setq top (point))
    (if (hif-overlay-at top)
        (show-ifdef-block)
      (hide-ifdef-block))))

(defun hif-overlay-at (position)
  (let ((overlays (overlays-at position))
        ov found)
    (while (and (not found) (setq ov (car overlays)))
      (setq found (eq (overlay-get ov 'invisible) 'hide-ifdef)
            overlays (cdr overlays)))
    found))

;; cdecl
(require 'cdecl)
(global-set-key [(f9)] 'cdecl-explain)
;; (global-set-key [(f9)] (lambda () (interactive) (cdecl-explain (current-line))))
