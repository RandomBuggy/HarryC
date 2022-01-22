/*
 * suppose you have format specifiers of int but your value is float, now the ques, is it possible to get/print int value as float of course not changing the format specifiers????
 *
 * answer is yes. you need typecasting means transforming the same variables value (means fetching the value from same memory location but using as another datatype) from one datatype to another datatype. to do this use typecast syntax
 *
 *
 * The C language automatically sometimes give you typecasted result like to do Arithmatic operation between 
 *  int with int ==> int
 *
 *  float with int ==> float
 *
 *  int with float ==> float
 *
 *  float with float ==> float
 *
 * syntax:- 
 * (datatype)variable
 *
 */// now you are done to have typecast
#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Enter the value of \"a\" and \"b\": ");
    scanf("%d %f", &a, &b);
    printf("The value of a is %d and The value of b is %d\n", a, (int)b);
    return 0;
}

