(load-file (expand-file-name "~/.emacs.d/elisp/sql.el"))
(load-file (expand-file-name "~/.emacs.d/elisp/mysql.el"))

;;(setq sql-mysql-options (list "-P 6871"))    ;;如果mysql没有使用标准端口

;;两个常用的帐号
(setq sql-connection-alist
      '((pool-a
	 (sql-product 'mysql)
	 (sql-server "127.0.0.1")
	 (sql-user "root")
	 (sql-password "ayanamirei")
	 (sql-database "db1")
	 (sql-port 6871))
	(pool-b
	 (sql-product 'mysql)
	 (sql-server "ip2")
	 (sql-user "user2")
	 (sql-password "pwd2")
	 (sql-database "db2")
	 (sql-port 3306))))

(defun sql-connect-preset (name)
  "Connect to a predefined SQL connection listed in `sql-connection-alist'"
  (eval `(let ,(cdr (assoc name sql-connection-alist))
	   (flet ((sql-get-login (&rest what)))
	     (sql-product-interactive sql-product)))))

(defun mysql-a ()
  (interactive)
  (sql-connect-preset 'pool-a))

(defun mysql-b ()
  (interactive)
  (sql-connect-preset 'pool-b))

(require 'sqlparser-mysql-complete)
(define-key sql-mode-map (quote [M-return]) 'sqlparser-mysql-complete)
(define-key sql-interactive-mode-map  (quote [M-return]) 'sqlparser-mysql-complete)

(require 'mysql-query)
;;(defvar mysql-connection nil)
;;(unless (mysql-query-connection-alive-p	 mysql-connection)
;;  (setq mysql-connection (call-interactively 'mysql-query-create-connection)))
