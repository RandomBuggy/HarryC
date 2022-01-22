#include <stdio.h>

int main()
{
    int i, input;
    printf("Enter a number, you want MulTable: ");
    scanf("%d", &input);
    printf("The MulTable of %d is follow\n", input);
    for ( i = 1; i < 11; i++ ) {
        printf("%d X %d = %d\n", input, i, input * i);
    }
    return 0;
}

