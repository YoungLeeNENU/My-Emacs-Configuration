;; edbfm --- a douban fm client in emacs
;; Author: 李旸<YoungLeeNENU@gmail.com>
;; Maintainer: 李旸<YoungLeeNENU@gmail.com>
;; Keywords: douban-fm
;; Version: 1.0.0
;; Created: 3.30.2013
;;
;; This file is not a part of GNU Emacs.
;;
;; This program is free software; you can redistribute it and/or modify it under
;; the terms of the GNU General Public License as published by the Free Software
;; Foundation; either version 2, or (at your option) any later version.
;;
;; This program is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;; FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;; details.
;;
;; You should have received a copy of the GNU General Public License along with
;; GNU Emacs; see the file COPYING.  If not, write to the Free Software
;; Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
;;
;; Code:

(defun edbfm ()
  "edbfm status message."
  (interactive)
  (defvar status-msg-on "Edbfm status: ON")
  (message status-msg-on))

(provide 'edbfm)

;; doubanfm.el ends here
