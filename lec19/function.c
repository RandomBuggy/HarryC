/*
 * function are normal code packed into a compound statements.
 * functions are used to cut into pieces a programme
 * same function can be called multiple time so by creating function we got reusability and modularity
 * function are also known as procedure or subroutine
 * basic syntax to create a function:-.
 *there are two types of function
 * 1. library function & user defined function
 * 1. library functions are those functions that are included (writed) into c header files like printf() 
 *
 * 2. user defined function are those function that are created by a C programmer. and this type of function's syntax given below===>
 *
 *
 * return type function_name( type argument1, type argument2, type argument2, type argumentn ) {
 *     code here;
 *  }
 * Attention Please, we have skip very important variable type based on function 
 *
 * 1. global variable
 * 2. local variable
 *
 * 1. global ==> they are declared and initialized inside main function because now we know that C programme execution start from main function so they can be used any where inside nother function also 
 *
 * 2. local ==> variable are declared and initialized for a particular function only so that do have any existance outside of the function, if want to use a function's (local) variable value you will get error cause the variable does not exists outside of the function
 *
 *
 * for more clearity, we tell that argument or sometimes you might heared parameters both the word used for functions in any programming language. argument/parameter are nothing but normal variable ( like basic, derived, enumerated, miscellanous etc) as they declared and (will be) initialized for the function so they are local variable.
 *
 * if you want to give global variable (initialized) as a functions argument then the variable's data flow will be like this ==>
 *      (local) a = (global) d = bla
 *
 * but it is not mandatory to pass variable for value , you can directly pass value but the value will be stored as sequence of the declaration of local variable (like arg1 = int c, arg3 = float g etc) so keep it mind
 *
 * and almost every function returns a value after performing its task and give back the control to its parent function or to the OS ( in case of main() ) so, we can capture the value in a variable 
 *
 * calling a function is nothing but to write only the function name with parenthesis and inside parenthesis with needed argument a function called upto infinite times after creating( declaring, defining) it.
 */
#include <stdio.h>
int sum(int c, int d) {
    return (int)c + (int)d;
}
void printstar(int n) {
    for ( int i = 0; i <= n; i++ ) {
        printf("%c", '*');
    }
}

void quiz() {
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if ( age > 18 ) {
        printf("\nYou can not VOTE!\n");
    }
    else {
        printf("You can VOTE!\n");
    }
}
int main()
{
    int a, b, c;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    c = sum(a, b);
    printf("The Sum: %d\n", c);
    printstar(10);
    quiz();
    return 0;
}
