/*
 * NULL pointer is a special value (macro) assigned pointer which is NULL ( this macro in most compiler replaced with (void*)0) ), which means it is not pointing to any valid memory address. so, NULL pointer can not be dereferenced. In C,NULL pointer is a undefined behaviour.
 *
 * this is very important because when we only declare not initialize a value to a pointer, the pointer point to a garbage address, which is dangerous because if the address match to a very important and useful data in the memory, then if the pointer is dereferenced and the value gets changed then is is a great issue
 *
 * to avoid the issue in C language, we use NULL pointer or in some case, after some time later of execution, we set pointer value to NULL to sure that the address the pointer is pointing to is safe.
 *
 * and of course this type of pointer is not equal to any other type of pointer, this condition is very very important.
 *
 * now difference
 * a uninitialized pointer has garbage value but a NULL pointer no ( valid) value
 * void pointer is a type but NULL is a value
 * to be in safe zone that in the programme, somebody can not dereference and change a specific address value then we set pointer value as NULL or set NULL pointer
 *
 * we can also check that if a pointer really point to a address or not
 */
#include <stdio.h>

int main()
{
    int *ptr, a = 34;
    ptr = &a; 
    if ( ptr != NULL) {
    printf("Address of ptr: %d\n", *ptr);
    }
    else {
        printf("NULL pointer can not be dereferenced\n");
    }
    int* p;
    printf("%d\n", p);
    return 0;
}

