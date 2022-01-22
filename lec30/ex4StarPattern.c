#include <stdio.h>


void starpattern() {
    int input;
    printf("[*] Enter number of lines to display: ");
    scanf("%d", &input);
    for ( int i = 0; i < input; i++) {
        for ( int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpattern() {
    int input;
    printf("[*] Enter the number of lines to display: ");
    scanf("%d", &input);
    for ( int i = input; i > 0; i-- ) {
        for ( int j = input; j >= input - i - 1; j-- ) {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int input;
    printf("Triangular Pattern Creator\n\n\t[*] Press 1 for Triangular pattern\n\n\t[*] Press 2 for Reverse Triangular Pattern\n\n[>] Enter Your choice: ");
    scanf("%d", &input);
    if ( input == 1) {
        starpattern();
    }
    else if ( input == 2) {
        reversestarpattern();
    }
    else {
        printf("Invalid Option!! Try Again!!!\n");
    }
    return 0;
}

