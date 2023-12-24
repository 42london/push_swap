# https://youtrack.jetbrains.com/issue/CPP-7090

set remote exec-file /home/andrei_belov/git/c/42london/push_swap/bin/push_swap
set logging on
set confirm off

define target remote
target extended-remote | vgdb --multi $arg0
monitor reset halt
set breakpoint pending on
break main
end

set follow-fork-mode child
set detach-on-fork off
catch fork

show user
#show auto-load
show remote exec-file

