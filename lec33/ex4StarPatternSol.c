#include <stdio.h>

void star() {
    int input;
    printf("[*] Enter the number of lines to display: ");
    scanf("%d", &input);
    for ( int i = 0; i < input; i++ ) {
        for ( int j = 0; j <= i; j++ ) {
            printf("*");
        }
        printf("\n");
    }
}
void revstar() {
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
    printf("Triangular Pattern Creator\n\n\t[*] Press 1 for Star Pattern\n\n\t[*] Press 2 for Reverse Star Pattern\n\n[>] Enter Your Choice: ");
    scanf("%d", &input);
    switch (input) {
        case 1:
            star();
            break;
        case 2:
            revstar();
            break;
        default:
            printf("Invalid Option!!!\n");
    }
    return 0;
}

