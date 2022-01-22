/*
 * recursions is very important in almost all programming or scripting language. many more time recursion will help to build logic easily. there are several problems which solved with recursions very easily
 *
 * so, what is recursion???
 *
 * recursion is like I am calling myself, oh, recursion is mainly implementable with function, so, recursion is a process where something calling itself or its copy multiple time.
 *
 * when we implement it with function, because function can be called infinite time, we trick function calling, we call the function inside its definition , as a result, the function calls itself again and again so, the recursion process starts.
 *
 * A particular function perform recursion is called recursive function
 *
 * A very important thing is we need a termination condition on some functions to stop them calling themself infinite time.
 *
 * NOTE:- any problem that solved with recursion can also be solved with iteration ( using loops )
 *
 * so, when to use which method is upon you.
 *
 * you have to point on less line of code, efficient code, on massive line of code 
 *
 *
 * so, sometimes recursion gives these advantage like less line of code, efficient code, no massive code etc on such problems like tower of hanoi, fibbonacci series, factorial etc. better of apply recursion on these problem solution
 *
 * if you want simple code then apply loops on these problems
 *
 * now another very very important point is the base case ( not the switch-case control, just situation) and the recursive case
 *
 * recursive case:- for those instances the function calls it self until the base comes is called recursive case.
 *
 * base case is from recursive case to where the have to return its processed data
 *
 * so, in recursive case the function will call it self again and again until a base case comes
 *
 * and in base case the function return its processed value. 
 *
 *
 *
 */
#include <stdio.h>

int factorial(int n) {
    if ( n == 0 || n == 1 ) {
        return 1;
    }
    else {
        return ( n * factorial( n - 1) );
    }
}

int main()
{
    int m;
    printf("Welcome!! The Factorial Programme\n[*] Enter a number: ");
    scanf("%d", &m);
    int fac = factorial(m);
    printf("The Factorial is %d \n", fac);
    return 0;
}

