/*
 * first, there are two types of parameters, they are 1.actual parameters and 2.formal parameters
 * there are two special type of variable according to the function. they are:- 1.global variable and 2.local variable 
 *
 * actual parameters are value which are passed through the function while calling it.
 *
 * formal parameters are a kind of variable mostly we declare and initialize them when we define a function. and these parameters scope ( existance) are limited to the function not uotside a function, they are local variable also.
 *
 * we can pass global variable ( global variable are declare and initialize inside main() function ) as actual parameters but this case actual parameters value copy to the formal parameters ( local variable) so, yhe local variable can change, but the global variable remains secure
 *
 * so, from here, during function calling, call by value and call by reference comes.
 *
 * when we provide argument during function call we provide variable( indirectly value) as value. so, local scope can not change global scope 
 *
 * but if we provide reference (address) using pointer then the can go to the location and can change global scope
 */
#include <stdio.h>

void changeValue(int *ptra, int *ptrb) {
    int temp;
    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}
int main()
{
    int a = 34, b = 76;
    printf("%d %d\n", a, b);
    changeValue(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

