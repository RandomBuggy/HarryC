
/*
 *
 * palindrome is a sting which if reversed then it remains the same word or sentence.
 *
 * to check palindrome input a number from a user and pass through a custom function to check whether it is a function or not.
 *
 * return 0 or return 1.
 */
#include <stdio.h>

int isPalindrome(int num) {
    return 0 || return 1;
}


int main()
{
    int number;
    prinyf("Enter a number to check whether it is a palindrome or not\n");
    scanf("%d", &number);
    if (isPalindrome(number) ) {
        printf("The number is a Palindrome.\n");
    }
    else {
        printf("The number is not a palindrome\n");
    }
    return 0;
}

