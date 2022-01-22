/*
 * function's pointer can not be allocate/de-allocate in memory since they dont store value's address not instruction's address.
 *
 * so, you can provide a function as its pointer to another function's actual argument. thus, this function can be called multiple time inside a function, because the parent function has its child functions address.
 * this concept is called function callback.
 *
 * but when you call the function inside a function body block then it can not called multiple times, so, it is not a callback function.
 */
#include <stdio.h>

int Sum(int a, int b) {
    return a + b;
}

void greetHello(int (*fptr) (int, int)) {
    printf("Hello World\n");
    printf("sum: %d\n", fptr(5, 7));
}

void greetMorning(int (*p) (int, int)) {
    printf("Good Morning!!\n");
    printf("SUM: %d\n", p(33525, 5365));
}

int main()
{
    int (*ptr) (int, int);
    ptr = &Sum;
    greetHello(ptr);
    greetMorning(ptr);
    return 0;
}

