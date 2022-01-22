/*
 * with great power great responsibility
 * memory leaks caused when memory is not used properly. suppose, a developer forgets to delete memory from heap when not needed
 * to avoid these situation always free the heap block after using it.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, a;
    int* i2;
    while ( i < 20000 ) {
        printf("Hello World\n");
        i2 = (int*) malloc(30000 * sizeof(int));
        if (i % 100 == 0) {
            getchar();
        }
        i++;
        free(i2);
    }
    return 0;
}

