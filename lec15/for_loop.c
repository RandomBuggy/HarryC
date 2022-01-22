/*
 * for loop is used to iratrate some statements or block of code multiple times. also we can use to traverse array's or linked lists.
 *
 * it syntax is a tiny bit tricky to understand than other loop like do while/while.
 * for loop takes 3 statement argument 1st, initial value (initial value can be multiple) 2nd, condition (condition can be multiple but for loop execute all the condition yet for itself take the last nth condition as for loops's termitating point, so with some tricky mind we can input in 2nd argument the init value and increment/decrement also) , 3rd, optional increment. but if you want skip any of these argument, you just leave it black with token rules also, suppose you want to skip condition just follow token rules that token must need at least one whitespace to separate them by compiler, so leave one whitespace and put 3rd argument but definitely loop will achieve infinite state because every time (by default) condition become true and loop will execute infinite time
 *
 * for loop syntax:- 
 *
 * for ( init val; condition; opt ++ or opt -- ) {
 *     code here;
 *     }
 *
 */
#include <stdio.h>

int main()
{
    int num, i = 1, j = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for ( ; i <= num, j <= num; i += 1, j++ ) {
        printf("i = %d j = %d\n", i, j);
    }
    return 0;
}

