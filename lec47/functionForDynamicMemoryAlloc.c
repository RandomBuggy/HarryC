/*
 * dynamic memory is allocated from heap segment
 *
 * so, to implement this task we have four library function
 *
 * malloc()
 * calloc()
 * realloc()
 * free()
 *
 * malloc() stands for memory allocation. it takes amount of byte as actual parameter and reserve space in heap and returns a void pointer, it can be cast of any other type as per needed. if there is insufficient memory, heap-memory allocation fails and returns a NULL pointer and the reserved space is been initiated with garbage value by default.
 *
 * calloc() stands for contiguous memory allocation. it takes n as number of contiguous blocks and size of a datatype. it also return as malloc()'s pointer type, in both case of memory allocation success or memory allocation failure. calloc() initialize reserved space with 0.
 *
 * realloc() stands for reallocation. if dynamically allocated memory is insufficient, we can reallocate memory by overwriting the previous pointer with realloc() function. it takes previous pointer and size of memory in bytes as actual parameter.Again this pointer xan be type cast according to need.
 *
 * the free() function is used to free allocated memory blocks in heap segment. if the dynamically allocated memory is not required then we can use this free() function to free heap. it takes the allocation pointer ( as general meaning not technical meaning) as argument.
 *
 * all the above function are declared and defined in the stdlib.h header file. so, we have to include the header file use these function.
 * 
 * also we can use sizeof() for different architecture to get rid of writing the code again.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr, n;
    printf("Enter the length of Integer array: ");
    scanf("%d", &n);
    /* ptr = (int*) malloc(n * sizeof(int)); */
    //using calloc
    ptr = (int*) calloc(n, sizeof(int));
    for ( int i = 0; i < n; i++ ) {
        printf("Enter the value no %d of the Array: ", i);
        scanf("%d", &ptr[i]);
    }
    for ( int j = 0; j < n; j++ ) {
        printf("The value at %d is %d\n", j, ptr[j]);
    }

    free(ptr);

    printf("Enter the new length of Integer array: ");
    scanf("%d", &n);
    /* ptr = (int*) malloc(n * sizeof(int)); */
    //using calloc
    ptr = (int*) realloc(ptr, n * sizeof(int));
    for ( int i = 0; i < n; i++ ) {
        printf("Enter the value no %d of the Array: ", i);
        scanf("%d", &ptr[i]);
    }
    for ( int j = 0; j < n; j++ ) {
        printf("The value at %d is %d\n", j, ptr[j]);
    }
 
    free(ptr);
    return 0;
}

