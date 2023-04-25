TH man 1 "10 August 2022" "0x16. C - simple_shell"
.SH NAME
.B Simple Shell
- command language interpreter to write a simple UNIX command interpreter.
.sp
.SH SYNOPSIS
.B Simple Shell
.sp
.SH DESCRIPTION
.B Overview
Write a simple UNIX command interpreter.
Simple shell is a command language interpreter that reads lines from either a file or the
terminal, interprets them, and executes them.
.sp
.B Invocation
simple shell can be invoked both interactively and non-interactively.
.I Interactive: by typing ./simple_shell.
.I Non-interactive: via a pipe (e.g. echo "/bin/ls" | ./simple_shell).
.sp
.SS Command Execution
After receiving a command that has been split into words and results in a simple command and an optional list of arguments, the following is done:
.sp
.I Command name contains no slashes:
Shell attempts to locate it.
(a) Shell function name exisits = function is invoked.
(b) Shell function name does not exisits: shell searches for it in the list of shell builtins and if found that builtin is invoked.
.sp
.I Name is neither a shell function/builtin and contains no slashes:
Simple shell searches each for a directory containing an executable file by that name
(a) each element of the environmental variable PATH is seached.
(b) Usuccessful search: simple shell prints an error message "Error: File or description not found."
.sp
.SS Sample Functions
.sp
echo [arguments]	Used to display a line of text that is passed in as an argument prints a newline
.sp
ls [[flags]...[arguments]]	List directory contents according to the flags given by user
.sp
pwd	Prints working directory
.sp
.SS Shell Builtin Commands
.sp
cd	Changes work directory
.sp
env	Prints environmental variables
.sp
exit	To end a shell script and set its exit status
.sp
setenv	Used to define the value of environment variables
.sp
unsetenv	Deletes the variable name from the environment
.sp
.SH EXAMPLE
simple shell:
.sp
(your_terminal)$ ./simple_shell
.RE
.RS
.I $
.RE
.sp
Sample Usage:
.sp
.RS
.I $
echo "ALX simple_shell"
.RE
.RS
.I ALX simple_shell
.RE
.RS
.I $
.sp
.SH BUGS
Bugs...
.SH SEE ALSO
.sp
.SH AUTHORS
Phumlile Xaba
