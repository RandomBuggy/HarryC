/*
 * there are no string data type in C language 
 *
 * but it is a very important concept in real world properties like storing any name etc
 *
 * so, here comes character array as a huge part , because in C, strings are stored in a character array.
 *
 * we use a null( '\0' ) character as a termination sign of a string to avoid garbage value
 *
 * we can declare and initialize a string as follow
 *
 *   char str[] = "hfgjd";
 *   char str[] = { 'f', 'o', 'g', 'f','g', '\0'};
 *
 * you can use gets() function from stdio header file that takes multiple character as input and store them with null character as string input function. this function's actual parameter is a array name only.
 *
 * and you can use %s format specifier to print string or the puts() function to print string and this function also takes its actual parameter as the array name only
 *
 * if you use scanf() you can nut take white space in string
 */
#include <stdio.h>

void printStr( char a[] ) {
    int i = 0;
    while ( a[i] != '\0' ) {
        printf("%c", a[i]); // getting output in a single line
        i++;
    }
    printf("\n");
}


int main()
{
    char string[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    char str[] = "Harry";
    puts(str);
    printStr(string);
    char sttr[40];
    printf("Enter Your Name: ");
    gets(sttr);
    printf("With Printf: %s\n", sttr);
    puts(sttr);
    return 0;
}

