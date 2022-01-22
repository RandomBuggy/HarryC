/*
 * while loop is just like do while loop, but in this loop we first put condition then write our instructions so that while loop first check condition then execute code. As the while loop takes only the condition, for this, it is easy to make infinite state than any other loop of C. So, while loop is very popular to perform infinite loop. you can also use optional increment/decrement to avoid infinite state
 */
#include <stdio.h>

int main()
{
    int num, index = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while ( index <= num ) {
        printf("%d\n", index);
        index++;
    }
    return 0;
}

