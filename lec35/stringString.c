/*
 *
 * there are many built-in library function ( the string.h header file ). some of them are strcat(), strlen(), strrev(), strcpy(), strcmp(), and so on.
 *
 * some of these function usage
 *
 * strcat() ==> to concatenate or combine two or multiple  strings
 *
 * strlen() ==> to find out length of a string, don't count NULL character.
 *
 * strrev() ==> to reverse a string
 *
 * strcpy() ==> to copy one string into another
 *
 * some thing like str1 to str2 // strcpy(str2, str1);
 *
 *
 *
 * strcmp() ==> this function is used to compare two strings
 *
 * return ASCII difference between two string's first unmatching character.
 *
 * in some compiler, if all the two string match strcmp() return 0, if unmatched character's first character(first string's) is less than the other then this function return negative value, if greater then this function return positive value.
 *
 * and in some compiler in returns ASCII difference value.
 *
 * according to the C standerds
 *
 * all above function return value
 *
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Harry";
    char s2[] = "HARRY";
    char s3[50];
    // throw error char concat[] = strcat(s2, s1);
    //puts(concat);
    puts(strcat(s2, s1));
    printf("length of s1 is %lu\n", strlen(s1));
    //printf("Reverse of string s1 is: ");
    //puts(strrev(s1)); this functio is not present in termux's string.h file
    strcpy(s3, s2);
    puts(s3);
    printf("strcmp returns for s1, s2 is %d\n", strcmp(s1, s2));
    return 0;
}

