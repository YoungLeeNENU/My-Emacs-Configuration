(add-to-list 'load-path "~/.emacs.d/elisp/")
;;自动补齐
(add-to-list 'load-path "~/.emacs.d/auto-complete/")
(require 'auto-complete-config)
(add-to-list 'ac-dictionary-directories "~/.emacs.d/auto-complete//ac-dict")
(ac-config-default)

;;模板
(add-to-list 'load-path
              "~/.emacs.d/plugins/yasnippet")
(require 'yasnippet)
(yas/global-mode 1)

;;ido
(require 'ido)
(ido-mode t)
;;ibuffer
(require 'ibuffer)
(global-set-key (kbd "C-x C-b") 'ibuffer)

;;buffer-move
(require 'buffer-move)
(global-set-key (kbd "<C-S-up>")	 'buf-move-up)
(global-set-key (kbd "<C-S-down>")	 'buf-move-down)
(global-set-key (kbd "<C-S-left>")	 'buf-move-left)
(global-set-key (kbd "<C-S-right>")	 'buf-move-right)

;;改变行高亮颜色
(global-hl-line-mode)
;;(set-face-background hl-line-face "snow2")
;;(set-face-background hl-line-face "royal blue")
(set-face-background hl-line-face "gray7")
;;(set-face-background hl-line-face "gray77")

;;改变光标形状
(add-to-list 'load-path
			 "~/.emacs.d/elisp")
(require 'cursor-chg)  ; Load this library
(change-cursor-mode 1) ; On for overwrite/read-only/input mode
(toggle-cursor-type-when-idle 1) ; On when idle
(defgroup cursor-change nil
  "Group for cursor-change."
  :group 'cursor
  :prefix "cursor-change-")

(defvar cursor-change-old-cursor-type nil "Cursor type before toggle on function `cursor-change-mode'.")
(defvar cursor-change-old-blink-cursor-mode nil "`blink-cursor-mode' before toggle on function `crsor-change-mode'.")

(setq curchg-default-cursor-color "red")
;;dark slate gray

;;区域高亮
(require 'highlight-symbol)
(global-set-key [(control f3)] 'highlight-symbol-at-point)
(global-set-key [f3] 'highlight-symbol-next)
(global-set-key [(shift f3)] 'highlight-symbol-prev)

;;color-moccur
(require 'color-moccur)
(require 'moccur-edit)

;;最近编辑痕迹
;;(require 'highlight-tail)
;;(message "Highlight-tail loaded - now your Emacs will be even more sexy!")
;;(highlight-tail-mode)
;; (setq highlight-tail-colors '(("gold" . 0)
;;                               ("yellow" . 25)
;;                               ("wheat" . 66)))

;; (setq highlight-tail-steps 14
;;       highlight-tail-timer 1)
;;(setq highlight-tail-posterior-type 'const)

;;anything
(require 'anything)

;;删除一些临时buffers，节省内存
(defvar my-clean-buffers-names
  '("\\*Completions" "\\*Compile-Log" "\\*.*[Oo]utput\\*$"
    "\\*Apropos" "\\*compilation" "\\*Customize" "\\*Calc""\\keywiz-scores"
    "\\*BBDB\\*" "\\*trace of SMTP" "\\*vc" "\\*cvs" "\\*keywiz"
    "\\*WoMan-Log" "\\*tramp" "\\*desktop\\*" ;;"\\*Async Shell Command"
    )
  "List of regexps matching names of buffers to kill.")

(defvar my-clean-buffers-modes
  '(help-mode );Info-mode)
  "List of modes whose buffers will be killed.")

(defun my-clean-buffers ()
  "Kill buffers as per `my-clean-buffer-list' and `my-clean-buffer-modes'."
  (interactive)
  (let (string buffname)
    (mapcar (lambda (buffer)
              (and (setq buffname (buffer-name buffer))
                   (or (catch 'found
                         (mapcar '(lambda (name)
                                    (if (string-match name buffname)
                                        (throw 'found t)))
                                 my-clean-buffers-names)
                         nil)
                       (save-excursion
                         (set-buffer buffname)
                         (catch 'found
                           (mapcar '(lambda (mode)
                                      (if (eq major-mode mode)
                                          (throw 'found t)))
                                   my-clean-buffers-modes)
                           nil)))
                   (kill-buffer buffname)
                   (setq string (concat string
                                        (and string ", ") buffname))))
            (buffer-list))
    (if string (message "清理buffer: %s" string)
    ;(if string (message "Deleted: %s" string)
       (message "没有多余的buffer"))))
      ;(message "No buffers deleted"))))

;;智能行号
(require 'linum+)

;;矩形操作
(require 'rect-mark)
