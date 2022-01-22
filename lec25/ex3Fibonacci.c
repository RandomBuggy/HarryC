#include <stdio.h>

int fibo(n) {
    if ( n == 1 || n == 2 ) {
        return n - 1;
    }
    else {
        return fibo( n - 1 ) + fibo( n - 2 );
    }
}
int main()
{
    int input;
    printf("Enter a index: ");
    scanf("%d", &input);
    printf("At index %d: the fibonacci value %d\n", input, fibo(input));
    return 0;
}

