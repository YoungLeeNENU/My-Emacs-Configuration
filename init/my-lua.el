;;; my-lua.el --- 
(add-to-list 'load-path
			 "~/.emacs.d/elisp")
(add-to-list 'load-path
			 "~/.emacs.d/plugins/lua-mode")

;; lua-mode
(autoload 'lua-mode "lua-mode" "Lua editing mode." t)
(add-to-list 'auto-mode-alist '("\\.lua$" . lua-mode))
(add-to-list 'interpreter-mode-alist '("lua" . lua-mode))
(add-hook 'lua-mode-hook 'auto-complete-mode)

;; flymake-lua
(require 'flymake-lua)
(add-hook 'lua-mode-hook 'flymake-lua-load)

;; lua-block
(require 'lua-block)
(lua-block-mode t)
