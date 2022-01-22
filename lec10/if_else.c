/*
 * if else & elseif statements are also called control statements.
 * they are used to control the flow of instructions. like for condition1 execute for example 5 lines of instruction yet execute suppose 3 lines of instructions. but the situation might also be like for condition3 execute 9 lines of instruction yet for condition5 execute 7 lines of instruction yet execute 10 lines of instruction
 *
 *
 * to do this happened, we have to put condition inside these control statements which returns boolean true or boolean false. for example we can use relational or logical operator or both mixed as condition because all returns a boolean 0 or boolean 1
 *
 * syntax:-
 *      if(condition) {
 *          instruction
 *          }
 *      else if(condition) {
 *          instruction
 *          }
 *      else {
 *          instruction
 *          }
 * 
 *
 * control flow of the syntax below
 *
 *      first check if block if returns boolean true then run if block but if not, then checks else if block if yes then run else if block, lastly check for else block (it built-in takes boolean false) and run else block.
 *      it is not compulsory to have if block with else if block with else block, there can be all 3 block or 2 block(if block else block) or only 1 block(if block)
 *
 *      you can also use these if else controls inside into another if else controls, this type if else is called nested if control.
 */
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    printf("You have entered %d as your age.\n", age);
    if ( age >= 18 ) {
        printf("You can Vote!\n");
    }
    else if ( age >= 25 ) {
        printf("You are adult and can Vote!\n");
    }
    else {
        printf("Sorry, You can not Vote!!\n");
    }
    return 0;
}

