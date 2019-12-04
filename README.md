# Make-examples
Nothing more than a few examples on using GNU make:
https://www.gnu.org/software/make/

## Example:
```
$ make -f Makefile.hello 
  gcc -c -Wall hello.c -o hello.o
  gcc -Wall hello.o -o hello.exe

$ make -f Makefile.hello clean
  rm hello.o

$ make -f Makefile.hello install
  cp hello.exe ~/scripts/

$ make -f Makefile.hello test
  Hello!
```
