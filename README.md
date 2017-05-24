# simple-getch
Without using termcap or ncurses!
ncurses getch requires a window

Features:
Getting single keys just like the ncurses getch but without window

Getting line with:
- history
- buffer edition
- rollback

Usable functions are now in getch.h

TODO:
rewrite history functions (for now the behavior is not have most people would expect)
