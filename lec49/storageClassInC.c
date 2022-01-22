/*
 * storage class specify/define 3 properties of a variable. these are 1. scpoe ==> means availability example local/global/static variable
2. initial value ==> what type of data(value) will the variable's reserved memory space filled ( automatically initialized ) filled with.

3. life time ==> from when to when the memory space will reserved for the variable

* we have four types of storage classes in C language
* 1. automatic variables
*
* 2. external variables
*
* 3. static variables
*
* 4. register variables
*
* 1. automatic:-
* scpoe is local to it's origin function
* default value is garbage
* lifetime till the end of its orugin function block
* it is default storage class of any variable means int a; and auto int a; are the same
*
* the auto keyword is used to define automatic storage class before data type
*
* 2. external:-
*
* global to the whole programme
* default value is 0
* lifetime is throughout the lifetime of the programme
*
* global storage classe's variable can be changed by any function of the programme
*
* is it recommended to shrink the usage of global storage classe's variable because it hold the memory space for the programme whole lifetime.
*
* the extern keyword is used to tell the compiler that this ( storage class's) variable is declared somewhere else ( may be in other *.c programme ). it don't allocate space again for the variable but use the previously allocated space where the variable declared before.
*
* if it is declared in the other programme then you have to include inside of your current programme with full file name inside double quotes ( amazingly it is funny that file name it also a string so, pack it with double quotes.
*
* static:-
*
* scope local to the definition block
* default value is 0
*
* lifetime is throughout the lifetime of the programme 
*
* it will remain exist even it's declaration/definition_function block pop from the stack. if call the function infinite time, then the variable will remain remember its last value
*
* it is recommended to shrink usage of static variable in the programme
*
* the static keyword is used to tell the compiler as static variable
*
* register:-
* scope local to the function
* default value garbage value
* lifetime till the end of the function block
* register variable are stored in the CPU register instead of the memory(RAM) 
*
* the register keyword is used to define register storage class
*
* register is used for faster access to the variable, if in any case the compiler fail to reserve CPU register then it will allocate automatic storage class.
*
*/
#include <stdio.h>
#include "temp.c"

//int sum;
extern int sum;

int Main(int a, int b) {
    auto int sum = a + b;
    return sum;
}

int my() {
    static int a;
    a++;
    printf("%d\n", a);
    return 0;
}


int main()
{
    auto int sum = Main(3, 5);
    printf("%d\n", sum);
    my();
    my();
    my();
    my();
    my();
    my();
    my();
    my();
    register int v = my();
    printf("%d\n", v);
    return 0;
}

