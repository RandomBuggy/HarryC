/*
 *
 * we can pass a array through a function as formal parameter
 * so, to pass a array we need its base ( 1st elements's address) 
 *
 * we can give this in two ways 
 * by declaring a pointer to hold the base address of a array. so, we can access all the others element using pointer arithmetic for the contiguous memory
 *
 * also we can create another local-array-variable but this case also the array will return its base address so, this local-array-variable will convert into a pointer.
 *
 *
 * as array provide its memory address so, the global scope is also change its value( element)
 *
 * we can pass multi dimensional array also
 *
 */
#include <stdio.h>

int addArray( int arra[] ) {
    for ( int i = 0; i < 8; i++ ) {
        printf("the value at %d index is %d\n", i, arra[i]);
    }
    arra[3] = 0;
    return 0;
}

int addArr( int *ptr ) {
    for ( int i = 0; i < 8; i++ ) {
        printf("the value at %d index is %d\n", i, *( ptr + i)); // also ptr[i] work
    }
    return 0;
}

void multiArray( int aa[2][2] ) {
    for ( int i = 0; i < 2; i++ ) {
        for ( int j = 0; j < 2; j++ ) {
            printf("value at %d %d is %d\n", i, j, aa[i][j]);
        }
    }
}
int main()
{
    int array[] = {354, 7565, 665, 76, 76, 877, 42, 543};
    int result = addArray(array);
    addArr(array);
    int arr2[2][2] = {{5, 6}, {6, 7}};
    multiArray(arr2);
    return 0;
}

