clang version 7.0.0-3~ubuntu0.18.04.1 (tags/RELEASE_700/final)
gcc -g p5final.c
 ./a.out
enter 3 numbers
12 78 56
biggest number is 78 
 gdb a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
(gdb) b main
Breakpoint 1 at 0x82c: file p5final.c, line 21.
(gdb) r
Starting program: /home/runner/pps-test1-Mohammed075-6/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p5final.c:21
21  {
(gdb) n
23    input(&x,&y,&z);
(gdb) n
enter 3 numbers
12 78 56
24    cmp(x,y,z,&big);
(gdb) n
25    output(big);
(gdb) n
26    return 0;
(gdb) c
Continuing.
biggest number is 78[Inferior 1 (process 983) exited normally]
(gdb) 