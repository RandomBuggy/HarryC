/*
 * the goto statement allow us to go to a specific line of C code to start execution from there. something like it jumps to some xyz line of and start execution from there, for this goto statement is also called jump statement in C. it is prefarable when we need to break multiple loops with acsingle statement.
 *
 * to perform goto statement to have work, at first you need to declare a label (label declaration syntax is label_name: (colon must needed) ) then call the label with goto keyword in nth line of code and as a result the programme began to start from the label' xth line again and this will continue every timevwhen the programme goes the yth line's goto statement
 *
 *
 * Avoid goto statement as much as possible because the fellow programmers got confused by goto statement because C's nature is to start execution from main() but in goto statement it start again from label: which is confusing.
 *
 * syntax:-
 *
 * label:
 *    bla bla bla lines of instructions
 * goto label:
 *
 */
#include <stdio.h>

int main()
{
    int i, num;
    /*lab1:
         printf("We are inside goto statement\n");
         goto end;
    printf("Hello World\n");
    goto lab1;
    end:
        printf("End reached\n");*/
    for ( i = 0; i < 8; i++ ) {
        printf("%d\n", i);
        for( int j = 1; j < 10; j += 1 ) {
            printf("%d\nEnter 0 to EXIT: ", j);
            scanf("%d", &num);
            printf("You have entered %d\n", num);
            if ( num == 0 ) {
                //break;
                goto end;
            }
        }
    }
    end:
        printf(" \n");
    return 0;
}

