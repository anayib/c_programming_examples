# C Introduction Tutorial

This open repo aims to be a friendly introduction to learn/remember the foundations of C programming language.

**objectives**
- To get fluently enough with the C language to understand any computer science or program systems book that implement their examples in C.
- Understand the building blocks of the C programming language.

The content of this repo sums up my learnings from the C Programming Language Book by Brian W. Kernighan and Dennis M. Ritchie, and the crush C course from learn-c.org.


## The basics
### The Main function
* To create any program in C you need to create a `man(){}` function. To access functions like `printf` you need to include in the file the `<stdio.h>` built in library.
```c
#include <stdio.h>

int main()
{
 /* your code */
}
```
The main function data type is an int, because the main function returns a number that indicates if the program executed correctly or not. `0` as the returned value from`int main()` represents a successful execution of the program, a number greater that 0 represents an error in the execution.
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
A pointer is an integer variable that stores a memory address and reference a value, it does not stores the actual value just references it.
## Lineal data structures
### Queues
### Stacks
### Linked lists
## Non-lineal data structures
### Binary trees
### Grahps

## Input and Output - stdio -

## License

This repo is available under the [MIT license](https://opensource.org/licenses/MIT). It also includes external exercises that are available under a variety of licenses. See LICENSE for the full license text.
