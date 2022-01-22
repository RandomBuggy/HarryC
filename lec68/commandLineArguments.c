/*
 * command line arguments means inputtng value from the console/terminal not after entering the programme. 
 * the C language has this ability to receive input from command line.
 * the command line arguments are pass throw the main() function.
 * inside main() function as argc and argv.
 * in argc ==> number of arguments ( including the binary name also.so, argc is a integer variable ( local of main() ) by default argc hold 1 as its value.
 *
 * in argv ==> all the arguments are stored ( the binary itself also ).so argv is a pointer of a array basically a character array or string ( and array-pointer points to an array's 0th index) and pointer arithmetic can be used to retrive argument's data.
 */
#include <stdio.h>

int main(int a, char* aa[ ])
{
    printf("The value of argc is %d\n", a);
    for (int i = 0; i < a; i++) {
        printf("The value at %d is %s\n", i, aa[i]);
    }
    return 0;
}

