/* basically in do while loop we write all the set of instructions first then we write the condition but 2 other type of loop we do reverse. so, do while loop execute its indent instructions first then check the condition so that if the condition remains false/true but the loop execute at least ones.
 * do while loop syntax:-
 *     do {
 *         single or set of instructions
 *     } while (condition)
 * */
#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number ");
    scanf("%d", &num);
    do {
        printf("%d\n", index + 1);
        index++;
    } while ( index < num );
    return 0;
}

