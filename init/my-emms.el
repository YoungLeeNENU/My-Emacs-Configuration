(add-to-list 'load-path "/home/neo/.emacs.d/packages/emms")
(require 'emms-setup)
(emms-standard)
(emms-default-players)

(setq emms-player-list '(emms-player-mplayer)
	  emms-player-mplayer-command-name "mplayer"
	  emms-player-mplayer-parameters '("-slave"))

(setq emms-show-format "play: %s")

(require 'emms-lyrics)
(emms-lyrics 1)

;;(require 'emms-browser)
;;(require 'emms-get-lyrics)

;;default play dir

(setq emms-source-file-default-directory "~/Music")
(setq emms-playlist-buffer-name "enjoy music")
(setq emms-lyrics-enable 1)
(setq emms-track-type 1)

;;key biding

(global-set-key (kbd "C-c e q") 'emms-stop)
(global-set-key (kbd "C-c e s") 'emms-pause)
(global-set-key (kbd "C-c e n") 'emms-next)
(global-set-key (kbd "C-c e p") 'emms-previous)
(global-set-key (kbd "C-c e f") 'emms-show)
(global-set-key (kbd "C-c e >") 'emms-seek-forward)
(global-set-key (kbd "C-c e <") 'emms-seek-backward)
(global-set-key (kbd "C-c e b") 'emms-start)
(global-set-key (kbd "C-c e g") 'emms-playlist-mode-go)
(global-set-key (kbd "C-c e t") 'emms-play-directory-tree)
(global-set-key (kbd "C-c e h") 'emms-shuffle)
(global-set-key (kbd "C-c e e") 'emms-play-file)
(global-set-key (kbd "C-c e l") 'emms-play-playlist)
(global-set-key (kbd "C-c e r") 'emms-toggle-repeat-track)
(global-set-key (kbd "C-c e R") 'emms-toggle-repeat-playlist)
(global-set-key (kbd "C-c e u") 'emms-score-up-playing)
(global-set-key (kbd "C-c e d") 'emms-score-down-playing)
(global-set-key (kbd "C-c e o") 'emms-score-show-playing)
(global-set-key (kbd "C-c e -") 'emms-volume-lower)
(global-set-key (kbd "C-c e +") 'emms-volume-raise)

;; Show the current track each time EMMS
;; starts to play a track with "NP : "
(add-hook 'emms-player-started-hook 'emms-show)
(setq emms-show-format "Now Playing: %s")

;; When asked for emms-play-directory,
;; always start from this one
(setq emms-source-file-default-directory "~/music/")

;; Want to use alsa with mpg321 ?
(setq emms-player-mpg321-parameters '("-o" "alsa"))

;; my customizable playlist format
(defun bigclean-emms-info-track-description (track)
  "Return a description of the current track."
  (let ((artist (emms-track-get track 'info-artist))
        (title (emms-track-get track 'info-title))
        (album (emms-track-get track 'info-album))
        (ptime (emms-track-get track 'info-playing-time)))
    (if title
        (format
         "%-35s %-40s %-35s %5s:%-5s"
         (if artist artist "")
         (if title title "")
         (if album album "")
         (/ ptime 60)
         (% ptime 60)))))
(setq emms-track-description-function
      'bigclean-emms-info-track-description)

;; format current track,only display title in mode line
(defun bigclean-emms-mode-line-playlist-current ()
  "Return a description of the current track."
  (let* ((track (emms-playlist-current-selected-track))
         (type (emms-track-type track))
         (title (emms-track-get track 'info-title)))
    (format "[ %s ]"
            (cond ((and title)
                   title)))))
(setq emms-mode-line-mode-line-function
      'bigclean-emms-mode-line-playlist-current)
