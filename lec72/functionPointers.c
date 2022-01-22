/*
 * function pointers are that kind of pointer which stores the base address of a function from the code segment.
 * this concept uses basically in the function callback iimplementation.
 * using call back concept function can be called by other function-staying in the stack using the function-address/function-pointer
 *
 * syntax:-
 * return type (*ptr_name) (formal_argument)
 */
#include <stdio.h>

int Sum(int a, int b) {
    return a + b;
}

void greet() {
    printf("Hello World my user good morning\n");
}

int main()
{
    printf("Sum of 1 and 2 is %d\n", Sum(1, 2));
    int (*fPtr) (int, int);
    fPtr = &Sum; // now pointed to Sum
    printf("%d\n", (*fPtr) (7, 5));
    return 0;
}

