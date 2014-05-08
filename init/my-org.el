(add-to-list 'load-path
			 "~/.emacs.d/elisp")
(add-to-list 'load-path
			 "~/.emacs.d/epresent/")

;;org-extension
(require 'org-extension)
(autoload 'iimage-mode "iimage" "Support Inline image minor mode." t)
(autoload 'turn-on-iimage-mode "iimage" "Turn on Inline image minor mode." t)
(setq org-startup-indented t)
(setq org-log-done 'time)
(define-key global-map "\C-ca" 'org-agenda)
(setq org-todo-keywords
      '((sequence "TODO" "OPTION" "TIPS" "CAUTION" "KNOWNCAUSE" "|" "DONE" "CANCELED" "REPORT" "BUG" "FIXED")
        ))

;;epresent
(require 'epresent)
(autoload 'epresent-run "epresent")
(add-hook 'org-mode-hook
	  (function (lambda ()
		      (setq truncate-lines nil)
		      (setq word-wrap t)
		      (define-key org-mode-map [f3]
			'epresent-run))))

;;export-latex
(require 'org-latex)
(unless (boundp 'org-export-latex-classes)
  (setq org-export-latex-classes nil))
(add-to-list 'org-export-latex-classes
             '("article"
               "\\documentclass{article}"
               ("\\section{%s}" . "\\section*{%s}")))

;;日程管理
(global-set-key "\C-cc" 'remember)
(org-remember-insinuate)
(setq org-directory "~/GTD/")
(setq org-remember-templates '(
							   ("Task" ?t "** TODO %? %t\n %i\n %a" "~/GTD/inbox.org" "Tasks")
							   ("Book" ?c "** %? %t\n %i\n %a" "~/GTD/inbox.org" "Book")
							   ("Calendar" ?c "** %? %t\n %i\n %a" "~/GTD/inbox.org" "Calender")
							   ("Project" ?p "** %? %t\n %i\n %a" "~/GTD/inbox.org" "Project")))
(setq org-default-notes-file (concat org-directory "/inbox.org"))

(custom-set-variables
 '(org-refile-targets
   (quote
	(("inbox.org" :level . 1)("canceled.org" :level . 1) ("finished.org":level . 1))
	)))

;; 快速打开inbox
(defun inbox() (interactive) (find-file "~/GTD/inbox.org"))
(global-set-key "\C-cz" 'inbox)

;; 快速启动 agenda-view
(define-key global-map "\C-ca" 'org-agenda-list)
(define-key global-map "\C-ct" 'org-todo-list)
(define-key global-map "\C-cm" 'org-tags-view)
;;显示他们的内容
(setq org-agenda-files
	  (list "~/GTD/inbox.org"
			"~/GTD/inbox.org"
			"~/GTD/finished.org"))

;;iimage
(require 'iimage)
;;(autoload ""iimage-mode "iimage" "Support Inline image minor mode." t)
;;(autoload ""turn-on-iimage-mode "iimage" "Turn on Inline image minor mode." t)
