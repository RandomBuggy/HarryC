/*
 * switch case statements are alternative of if else control flow.
 *
 * syntax:-
 * switch (var ) {
 *    case var_1st_value(if would be):
 *        code here
 *    case var_2nd_value(if would be):
 *        code here
 *    case var_nth_value(if would be):
 *        code here
 *    default(if no case matched):
 *        code here
 *    }
 *
 *    Rules:- 
 *
 *    switch statements arguments is a var and in switch statement, we predict some value of a var and if our predicted value match any case we write code inside case indentation. Note:- nested switch statements can not be inside a switch indentation but some tricky mind we can use nested switch statements inside any of the case block. 
 *
 * the most annoying part of switch statements is if xth case matched then it execute all case after matched case till end including default also. to avoid this use break keyword at the end or where necessary of every or needed case block.
 *
 * rule1 ==> switch statements arguments must have to be int or char
 * rule2 ==> case statements arguments must have to be int or char
 * rule3 ==> case statements must come inside switch statements indentation
 * rule4 ==> break keyword is not a must
 */
#include <stdio.h>

int main()
{
    int input, mark;
    printf("Enter Your Age: ");
    scanf("%d", &input);
    printf("Enter Your Mark: ");
    scanf("%d", &mark);
    switch (input) {
        case 1:
            printf("[✓] You have passed!!\n");
            break;
        case 2:
            printf("[X] You have failed!!\n");
            switch (mark) {
                case 20:
                    printf("done\n");
                    break;
                default:
                    break;
            }
            break;
        default:
            printf("[^] Try Again!!!\n");
    }
    return 0;
}

