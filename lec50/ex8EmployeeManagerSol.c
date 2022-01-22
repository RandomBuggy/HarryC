#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    char* ptr;
    while ( i < 3) {
        printf("Employee %d: Enter the Number of Character in your Employee ID: ", i + 1);
        scanf("%d", &n);
        ptr = (char*) malloc((n + 1) * sizeof(char));
        printf("Enter your Employee ID: ");
        scanf("%s", ptr);
        printf("Your Employee ID is %s\n", ptr);
        free(ptr);
        i++;
    }
    printf("NOTE:- In order to get rid of unwanted behaviour of programme, in case of scanf() and character input multiple time ( using scanf() ) and the input is enter key then you will get some unwanted behaviour\n");
    printf("Because enter is a valid character data in C, when you press enter then it remains in the input buffer and for this, scanf grab the enter and put into &variable, to avoid this unwanted behaviour use getchar() function which take single character as input, so will grab enter from input buffer and scanf() will ask for input, use getchar() in such case before/after every scanf().");
    char a, b, c;
    printf("Enter a: ");
    getchar();
    scanf("%c", &a);
    printf("Enter b: ");
    getchar();
    scanf("%c", &b);
    printf("Enter c: ");
    getchar();
    scanf("%c", &c);
    return 0;
}

