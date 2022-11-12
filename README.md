# I 💕 C programming.
## Show me the way
# 100.c

#inclde <stdio.h>

/**

* main - Gateway pth of excution

* return: 0 when sure deal

*/

int main(void)

/*
    int (outer, inner);
    
for (outer =48;outer<=57;outer++)
   
 
for (inner=48;inner<=57;inner++)

    {
        if (inner == outer)

    {
        continue;

    }
    else
    {
        putchar(outer);
        putchar(inner);
        putchar(44);
        putchar(32);
        }
       }
      }
      putchar(10);Static libraries

A static library is a collection of object code files in one archive file that can be shared by programs.

Static library is made when object code .o files are linked together to form an archive .a file which can be used in any program that one of the functions in these file is used.

Example.

Files used for basic C operation.

    Prototype declaration

main.h

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void add(int n, int m);
void sub(int n, int m);
void mult(int n, int m);
void div(int n, int m);

#endif

    add.c

/**
 * add - Performs addition on two numbers
 * @n: integer variable
 * @m: integer variable
*/
void add(int n, int m)
{
	printf("%d + %d = %d\n", n , m , n + m);	
}

    sub.c

/**
 * sub - Performs subtraction on two numbers
 * @n: integer variable
 * @m: integer variable
*/
void sub(int n, int m)
{
	printf("%d - %d = %d\n", n , m , n - m);	
}

    mult.c

/**
 * mult - Performs multiplication on two numbers
 * @n: integer variable
 * @m: integer variable
*/
void mult(int n, int m)
{
	printf("%d * %d = %d\n", n , m , n * m);	
}

    div.c

/**
 * div - Performs division on two numbers
 * @n: integer variable
 * @m: integer variable
*/
void div(int n, int m)
{
	printf("%d / %d = %d\n", n , m , n / m);	
}

ls
add.c sub.c mult.c div.c

Create object files for the files

gcc -c *.c

OR

gcc -c all_your_file_names.c
#List all your file name gcc -c add.c sub.c div.c mult.c but it is stressful

The above command will create co-responding object file names file.c -> file.o there is no need to specify the output file names

-c -> Stop the compiling after the assembly stage. Translate .c to .o

Now the object files have been created

ls 
add.c add.o sub.c sub.o mult.c mult.o div.c div.o

Create the archive file

Now that we have the object files, they must be linked into an archive file with the use of ar by the linker forming one large .a file.

The output will be a pre-compiled object code file.

ar -rc liboperators.a *.o

#Create archive and index it as well
ar -rcs liboperators.a *.o
 

By conversion your archive file should file name should start with lib followed by the name. Example liboperators "library for operators"

-rc flags -> recursively create the archive file.

r : if the file exists overwrite its contents with newer one.

c : Create the archive if it does not exist.

s : Add index to the archive or update it if it already exists.

Indexing the library

nw ranlib

Indexing helps in sorting the functions order of their call.

if a function is called before it is declared that will cause an error of unknown function so indexing makes sure that that functions declarations are before function calls.

$ ranlib liboperators.a

nw liboperators.a

Letting the compiler know where to find the archieved operators library

main.c

#include <stdio>
#include "main.c"
/**
 * main - Perform basic calculations
 * return: returns zero if the program ran successfully
 *
*/
int main(void)
{
	add(2,3);
	sub(20,35);
	mult(4,3);
	div(14,7);

	return (0);
}

$ gcc  main.c -L. liboperators.a -o result 

-L. -> L dot: Locate the library file inside the current directory

-o -> Save the output inside result. result will be an executable file
      return (0);
      }
      */

      {
        int n;
                int d1;
                int d2;
                for (n = 1; n<99; n++)
                {
         d1 = n / 10;
         d2 = n % 10;
         if (d1 < d2)
         {
            putchar(d1 + '0');
            putchar(d2 + '0');
            if (n < 89)
         {
            putchar(',');
            putchar('');
            }
         }
       }
       putchar('\n');
       return (0);   
      
