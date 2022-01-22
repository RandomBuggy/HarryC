/*
 * break and continue both are in-built keyword in C  and these keywords are valid statements in C, means you need to just write break/continue; to use break or continue keyword's functionality. 
 *
 * break can be used only with loops and switch case control flow.
 * break basically breaks the loops and take control back out of the loop
 *
 * continue statement used with loops and its task is to skip some code or lines of code and go to next loop calling (iratration), most important word, it dont end the loop but only skip some instructions for 1 times because of having condition become true.  
 */
#include <stdio.h>

int main()
{
    int i, input;
    for ( i = 0; i <= 10; i++ ) {
        printf("%d\nEnter Your Age: \n", i);
        scanf("%d", &input);
        if ( input > 20 ) {
            break;
        }
        if ( input == 10 ) {
            continue;
        }
    }
    switch (input) {
        case 1:
            printf("%d\n", input);
            break;
        case 20:
            printf("Null\n");
            break;
        default:
            printf("%d\n", input);
    }
    return 0;
}

