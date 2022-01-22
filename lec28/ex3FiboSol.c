#include <stdio.h>


int fibo_recur(int n) {
    if ( n == 1 || n == 2 ) {
        return n - 1;
    }
    else {
        return fibo_recur( n - 1 ) + fibo_recur( n - 2 );
    }
}
int fibo_itera(int n) {
    int a = 0;
    int b = 1;
    for ( int i = 0; i < n - 1; i++ ) {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int input;
    printf("Enter a index to get fibonacci series :");
    scanf("%d", &input);
    printf("At index %d the Fibonacci value is %d\n", input, fibo_itera(input));
    printf("recursive: at index %d the fibonacci value is %d\n", input, fibo_recur(input));
    return 0;
}

