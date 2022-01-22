/*
 * there are four operators for pointer arithmatic in C. they are:-
 * ++
 * --
 *  +
 *  -
 *
 *  if '+' is used, pointer increment it's (stored) memory address by 1 time, means if 32-bit architecture then a int variable takes 4 bytes so, '+' operator will add 4 byte into stored memory address not the pointer's memory address, and '-' operator will reduce 4 byte from stored memory address the same way.
 *
 *  if I use increment/decrement operator ++/-- then it will do 1 increment/decrement to pointers stored address
 *  
 *  if I store different data type then it will do different size of increment/decrement
 * 
 *
 * these pointer arithmatic concept like adding the zize of a particular datatype of a specific architecture to a pointer's stored address, we can use to retrieve arrays element because array reserve contiguous memory location
 *
 * because if ptr is a int array pointer then 
 *
 *  array[i] means   * ( ptr + i ) the same thing
 *
 *  yaaah lets do this.
 */
#include <stdio.h>

int main()
{
    int a;
    char b;
    int *p1 = &a;
    char *p2 = &b;
    printf("%p\n", p1);
    printf("%p\n", p1 + 2);
    printf("%p\n", p1++);
    printf("%p\n", p1 - 2);
    printf("%p\n", p2);
    printf("%p\n", p2 + 2);
    printf("%p\n", p2++);
    printf("%p\n", p2 - 2);
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", &array[0]);
    printf("%d\n", array);
    printf("%d\n", &array[3]);
    printf("%d\n", array + 3);
    /* other format specifier can also be used like %x, %p etc, we used %x here to manipulate value for easiness*/
    int *p = &array;
    printf("%d\n", *(&array[0]));
    printf("%d\n", array[0]);
    printf("%d\n", *(array));
    printf("%d\n", *(&array[5]));
    printf("%d\n", array[5]);
    printf("%d\n", *(array + 5));
    // you can not increase the size of an array
    //   array++
    // but with trick an array pointer size can be increased
    p++;
    return 0;
}

