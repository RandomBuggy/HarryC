#include <stdio.h>

int main()
{
    int input;
    printf("Enter Your Choice!\nEnter which subject you have Passed!!\n[*] Press 1 for Math & Science\n\n[*] Press 2 for Science only\n\n[*] Press 3 for Math only\n\n[*] Enter Your Input: ");
    scanf("%d", &input);
    if ( input == 1 ) {
        printf("Congratulations!! You are going to get TWO gifts soon!!!\n");
    }
    else if ( input == 2 ) {
        printf("Congratulations!! You are going to get ONE gifts soon!!!\n");
    }
    else {
        printf("Congratulations!! You are going to get ONE gifts soon!!!\n");
    }
    return 0;
}

