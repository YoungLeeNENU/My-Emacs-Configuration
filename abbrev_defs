;;-*-coding: utf-8;-*-
(define-abbrev-table 'Buffer-menu-mode-abbrev-table '())

(define-abbrev-table 'awk-mode-abbrev-table
  '(
   ))

(define-abbrev-table 'c++-mode-abbrev-table
  '(
    ("inc" "" skeleton-include 1)
   ))

(define-abbrev-table 'c-mode-abbrev-table
  '(
    ("inc" "" skeleton-include 1)
   ))

(define-abbrev-table 'calendar-mode-abbrev-table '())

(define-abbrev-table 'comint-mode-abbrev-table '())

(define-abbrev-table 'completion-list-mode-abbrev-table '())

(define-abbrev-table 'cperl-mode-abbrev-table
  '(
    ("usedump" "use Data::Dumper qw(Dumper);" pde-abbv-no-blank 0)
    ("useenc" "use Encode qw(encode decode from_to);" pde-abbv-no-blank 0)
    ("usegtk" "use Gtk2 '-init';
use Glib qw(TRUE FALSE);

my $window = Gtk2::Window->new('toplevel');
$window->signal_connect('delete_event' => sub { Gtk2->main_quit; });" pde-abbv-no-blank 0)
    ("useopt" "use Getopt::Long;
GetOptions();" pde-abbv-no-blank 0)
   ))

(define-abbrev-table 'display-time-world-mode-abbrev-table '())

(define-abbrev-table 'dsssl-mode-abbrev-table '())

(define-abbrev-table 'eieio-custom-mode-abbrev-table '())

(define-abbrev-table 'emacs-lisp-byte-code-mode-abbrev-table '())

(define-abbrev-table 'emacs-lisp-mode-abbrev-table '())

(define-abbrev-table 'emms-lyrics-mode-abbrev-table '())

(define-abbrev-table 'epresent-mode-abbrev-table '())

(define-abbrev-table 'eshell-mode-abbrev-table '())

(define-abbrev-table 'fundamental-mode-abbrev-table '())

(define-abbrev-table 'global-abbrev-table '())

(define-abbrev-table 'help-mode-abbrev-table '())

(define-abbrev-table 'idl-mode-abbrev-table '())

(define-abbrev-table 'inferior-python-mode-abbrev-table '())

(define-abbrev-table 'inferior-scheme-mode-abbrev-table '())

(define-abbrev-table 'java-mode-abbrev-table
  '(
   ))

(define-abbrev-table 'jython-mode-abbrev-table '())

(define-abbrev-table 'lisp-mode-abbrev-table '())

(define-abbrev-table 'objc-mode-abbrev-table
  '(
   ))

(define-abbrev-table 'occur-edit-mode-abbrev-table '())

(define-abbrev-table 'occur-mode-abbrev-table '())

(define-abbrev-table 'org-mode-abbrev-table '())

(define-abbrev-table 'outline-mode-abbrev-table '())

(define-abbrev-table 'pike-mode-abbrev-table
  '(
   ))

(define-abbrev-table 'process-menu-mode-abbrev-table '())

(define-abbrev-table 'prog-mode-abbrev-table '())

(define-abbrev-table 'python-mode-abbrev-table '())

(define-abbrev-table 'python2-mode-abbrev-table '())

(define-abbrev-table 'python3-mode-abbrev-table '())

(define-abbrev-table 'remember-mode-abbrev-table '())

(define-abbrev-table 'rspec-compilation-mode-abbrev-table '())

(define-abbrev-table 'ruby-mode-abbrev-table '())

(define-abbrev-table 'scheme-mode-abbrev-table '())

(define-abbrev-table 'shell-mode-abbrev-table '())

(define-abbrev-table 'sldb-mode-abbrev-table '())

(define-abbrev-table 'slime-connection-list-mode-abbrev-table '())

(define-abbrev-table 'slime-inspector-mode-abbrev-table '())

(define-abbrev-table 'slime-thread-control-mode-abbrev-table '())

(define-abbrev-table 'slime-xref-mode-abbrev-table '())

(define-abbrev-table 'snippet-mode-abbrev-table '())

(define-abbrev-table 'special-mode-abbrev-table '())

(define-abbrev-table 'speedbar-mode-abbrev-table '())

(define-abbrev-table 'tabulated-list-mode-abbrev-table '())

(define-abbrev-table 'term-mode-abbrev-table '())

(define-abbrev-table 'text-mode-abbrev-table '())

(define-abbrev-table 'vc-git-log-edit-mode-abbrev-table '())

(define-abbrev-table 'vc-git-log-view-mode-abbrev-table '())

(define-abbrev-table 'xs-mode-abbrev-table '())

