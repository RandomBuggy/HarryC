#include <stdio.h>

int main()
{
    char s1[8];
    char s2[8];
    printf("Enter Your Name: ");
    gets(s1);
    printf("Enter Your Friend Name: ");
    gets(s2);
    printf("%s is a friend of %s\n", s2, s1);
    puts(strcat(s1, s2));
    return 0;
}

