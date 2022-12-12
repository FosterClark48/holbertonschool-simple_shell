# Holberton Simple-shell Project
## Discription
This project we are tasked with creating our own shell. Output must be the same as sh(/bin/bash) as well as same error output.
The only difference is when you print an error, the name of the program must be equivelent to your `argv[0]`.
# Error Exmple with `sh` 
```
$ echo "fugazi" | /bin/sh
/bin/sh: 1: fugazi: not found
$ echo "fugazi" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$ 
```
 # Same error with `hsh` program
```
$ echo "fugazi" | ./hsh
./hsh: 1: fugazi: not found
$ echo "fugazi" | ./././hsh
./././hsh: 1: fugazi: not found
$
```
#  Allowed Functions and System Calls
`access`(man 2 access)
`chdir` (man 2 chdir)
`close` (man 2 close)
`closedir` (man 3 closedir)
`execve` (man 2 execve)
`exit` (man 3 exit)
`_exit (man 2 _exit)
`fflush` (man 3 fflush)
`fork` (man 2 fork)
`free` (man 3 free)
`getcwd` (man 3 getcwd)
`getline` (man 3 getline)
`getpid` (man 2 getpid)
`isatty` (man 3 isatty)
`kill` (man 2 kill)
`malloc` (man 3 malloc)
`open` (man 2 open)
`opendir` (man 3 opendir)
`perror` (man 3 perror)
`read` (man 2 read) 
`readdir` (man 3 reddir)
`signal` (man 2 signal)
`stat`  (__xstat)(man 2 stat)
`lstat` (__lxstat)(man 2 lstat)
`fstat` (__fxstat)(man 2 fstat)
`strtok` (man 2 strtok)
`wait` (man 2 wait)
`waitpid` (man 2 waitpid)
`wait3` (man 2 wait3)
`wait4` (man 2 wait4)
`write`(man 2 write)

# Compilation
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
# Testing
how shell should work in interactive mode

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
how shell should work in non interactive mode

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

