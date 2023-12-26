# https://youtrack.jetbrains.com/issue/CPP-7090

set confirm off
set verbose on
set logging on
set trace-commands on

define target remote
set remote exec-file ./bin/push_swap
show remote exec-file
# file ./bin/push_swap
if $argc == 1
    target extended-remote $arg0
end
if $argc == 2
    target extended-remote $arg0 $arg1
end
if $argc == 3
    target extended-remote $arg0 $arg1 $arg2
end
if $argc == 4
    target extended-remote $arg0 $arg1 $arg2 $arg3
end
if $argc == 5
    target extended-remote $arg0 $arg1 $arg2 $arg3 $arg4
end
if $argc == 6
    target extended-remote $arg0 $arg1 $arg2 $arg3 $arg4 $arg5
end
set breakpoint pending on
break main.c:17
#monitor reset halt
info inferiors
#start
info inferiors
end

set follow-fork-mode child
set detach-on-fork off
#catch fork

show user
#show auto-load


