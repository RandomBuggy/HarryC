#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0;
    int oriNum = n;
    while ( n != 0 ) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if ( oriNum == rev ) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether the number is palindrome or not: ");
    scanf("%d", &number);
    if ( isPalindrome(number) ) {
        printf("The number is Palindrome\n");
    }
    else {
        printf("The number is not Palindrome\n");
    }

    return 0;
}

