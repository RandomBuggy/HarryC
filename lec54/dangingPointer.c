/*
 * dangling ( hanging) pointer is a pointer that is pointing to that address where's from the value (content) has been deleted or the memory location has been freed.
 *
 * cause of making dangling pointer
 *
 * deallocation of memory ( like freed dynamic memory )
 * when a function call return a local variable ( local variable also pop with the function from stack when the function return )
 * when a variable out of its scope
 * NOTE:- when we put ststements inside {} inside a function there from starting { to end } a scope start and ends
 *
 * as like function call when a scope end  the variable inside it declared and initialized also ends.
 *
 * dangling pointer effects:-
 * bugs and for bugs security holes comeout
 * to avoid this issue reinitialize dangling pointer with NULL, so, the pointer will become null pointer and points to nothing
 */
#include <stdio.h>
#include <stdlib.h>

int* func() {
    int a, b, sum;
    a = 34; b = 43;
    sum = a + b;
    return &sum;
    }


int main()
{
    int* ptr = (int*) malloc(7 * sizeof(int));
    for( int i = 0, j = 7; j++, i < 3; i++ ) {
        ptr[i] = j;
    }
    for (int x = 0; x < 3; x++) {
        printf("%d\n", *(ptr + x));
    }
    free(ptr);
    printf("");
    int* dang = func();
    int* d;
    {
        int a = 76;
        d = &a;
    }
    d = NULL;
    dang= NULL;
    ptr = NULL;
    return 0;
}

