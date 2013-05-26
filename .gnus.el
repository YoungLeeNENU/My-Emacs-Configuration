;; Make Gnus NOT ignore [Gmail] mailboxes
(setq gnus-ignored-newsgroups "")

(setq user-full-name "YoungLee")
(setq user-mail-address "YoungLeeNENU@gmail.com")

(setq gnus-select-method '(nnimap "gmail"
				  (nnimap-address "imap.gmail.com")
				  (nnimap-server-port 993)
				  (nnimap-stream ssl)))

(setq mail-sources
      '((pop :server "pop.gmail.com"
             :port 995
             :user "YoungLeeNENU@gmail.com"
             :password "AyanamiRei555691"
             :stream ssl)))

(setq message-send-mail-function 'smtpmail-send-it
      smtpmail-starttls-credentials '(("smtp.gmail.com" 587 nil nil))
      smtpmail-auth-credentials '(("smtp.gmail.com" 587 "YoungLeeNENU@gmail.com" nil))
      smtpmail-default-smtp-server "smtp.gmail.com"
      smtpmail-smtp-server "smtp.gmail.com"
      smtpmail-smtp-service 587)