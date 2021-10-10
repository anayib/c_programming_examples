# C Introduction Tutorial

This open repo aims to be a friendly introduction to learn/remember the foundations of C programming language.

**objectives**
- To get fluently enough with the C language to understand any computer science or program systems book that implement their examples in C.
- Understand the building blocks of the C programming language.

The content of this repo sums up my learnings from several C Programming and computer systems books.


## The basics
### The Main function
* To create any program in C you need to create a `man(){}` function. To access functions like `printf` you need to include in the file the `<stdio.h>` built in library.
```c
#include <stdio.h>

int main()
{
 /* your code */
 return 0;
}
```
The main function data type is an int, because the main function returns a number that indicates if the program executed correctly or not. `0` as the returned value from`int main()` represents a successful execution of the program, a number greater that 0 represents an error in the execution.

### Compiling a C file

1. Create a your_file.c file with at least the `main()` function.
2. Run `cc -o name_you_want_for_the_binary your_file.c `. This will create a binary executable file (executable object file) that can be run by the computer.
3. Run `./name_you_want_for_the_binary` from the terminal.

The compilation process has the following phases: lets say we have a `hello.c` file.
1. The preprocesor (cc, cpp ) modifies the original `hello.c` program and generates a new `hello.i` file that includes(bundles) the libraries you have include (eg: #include <stdio.h>).
2. IN the compilation phase the compiler translate the `hello.i` file to a `hello.s` file - assembly language program-
3. The assembler translates the `hello.s` file into machine language generating a `hello.o` file.
4. In the linking phase the compiler bundles the `hello.o` file with any other library required to execute the program and creates a `hello` which is an executable object file (executable).

Then when we run `./hello` from the terminal, the shell will load the hello binary code into the main memory and the operating system will start a process to run our code. The operations will be executed in the CPU and then the returned value is returned via the I/O bridge connected to the bus interface to the graphics adapter so that we see it in the screen.

### Variables
* In C all variables have to be declared before they are used.
* To declare a variable you need to specify the data type of the variable, eg : `int age` declares a variable named age of type integer.
### Basic types
* Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long.
* Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
* Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
* Boolean: C has no boolean type, it is normally defined using a symbolic constant, that is a name that points to a specific value.

```c
#define BOOL char
#define FALSE 0
#define TRUE 1
```
* To create strings C uses arrays of characters.
* Arrays: is a compaund data structure that can hold more than one value under the same variable name. It is defined as follows:
```c
int numbers[10]; /* defines an array of 10 integers */
/*to populate the array */
numbers[0] = 10;
numbers[1] = 50;
...
numbers[n] = x;
```
In C arrays can only have one type of variable.
### Width and precision
%d print as decimal integer
%<x>d  print as decimal integer at least x characters wide
%f print as floating point
%<x>f print as floating point at least x characters wide
%.<X>f print as floating point, at least <x> characters after decimal point
%<x>.<y>f print as floating point, at least <x> wide and <y> after decimal point.

```c
 printf("%4.0f %3.1f\n", year, age )
 // this could print something like 2021, 35.5 years
```
### Loops
* While loop statement
```c
while (/*expression*/) {
  /*do something */
}
```
* The for loop statement
```c
int index

for (index = 0; index <= 10; index = index + 1) {
  /*do something*/
}
```
 It has 3 parts: the initialization, the condition that controls if the loop continues or not, and the increment.
## Types, Operators and Expressions
## Control Flow
## Functions
```c
/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d", foo(1));

    return 0;
}

/* function implementation */
int foo(int bar) {
    return bar + 1;
}
```

If you do not need to return a value from the function you need to declare it with the `void` type. Eg:
```c
#include <stdio.h>

/* function declaration */
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
void print_big(int x) {
    if (x > 10) {
        printf("%d is big\n", x);
    }
};
```
## Array Data Structure
## Other Structures
### Points
### Typedefs
## Pointers
A pointer is an integer variable that contains the memory address of the other variable.

In C the `&` operator returns the address of an object,then if we have a pointer `p` the way we point the pointer to the variable `c` will be
```c
int *p = &c;
```

The `&` operator gets the address of variables and arrays, it can not be applied to expressions, constants, and register variables.

The unary operator `*` is the indirection or dereferencing operator. It allows us to declare a pointer variable.

```c
/* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
int *pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);
```

```c
#include <stdio.h>
  13
  12 int main()
  11 {
  10   int five = 5;
   9   int *pointer = &five;
   8
   7   printf("The variable five value is %d \n and its value via the pointerfive is %d \n", five, *pointer);
   6
   5   *pointer += 1;
   4
   3   printf("Added one to *pointer now the five variable that was 5 is %d", five);
   2
   1   return 0;
  15 }
```

## Lineal data structures
### Queues
### Stacks
### Linked lists
## Non-lineal data structures
### Binary trees
### Graphs

## Input and Output - stdio -

## License

This repo is available under the [MIT license](https://opensource.org/licenses/MIT). It also includes external exercises that are available under a variety of licenses. See LICENSE for the full license text.
