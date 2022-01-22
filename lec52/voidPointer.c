/*
 * void pointer is that type of pointer which have no data type defined ( so, can store any type of memory's ( variables) address.
 *
 * also, void pointer can be typecasted to any type during initialization (like int, char, float etc)
 *
 * so, we can say void pointer is a general purpose pointer which we can use ( after typecasting) without any issue.
 *
 * in dynamic the malloc(), calloc() or realloc() function returns void pointer, so void pointer is very important
 *
 * void pointer address can be re-assigned again and again
 *
 * but if we dereference the pointer then we have tell the compiler the reserved memory size of a address (pointer), in dereference case, first typecast it and use the address as needed
 *
 * dereference in not possible for void pointers, cause we dont know what type of data is stored in the pointed address
 * also pointer arithmetic is not allow in C standerds also not recommended because we dont know how much size is consumed by its pointing address
 */
#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void* p;
    p = &a;
    //directly dereference not possible
    printf("a is: %d\n", *( (int*)p ));
    p = &b;
    printf("b is: %0.2f\n", *( (float*)p ));

    return 0;
}

