/*
 * format specifier is a way to tell the compiler what type of data is to display. means format specifiers replace themself with a value of a specific variable. there are different types of format specifiers as there are different types of data types is available
 *
 *
 * like 
 * %d is for int
 * %f is  for float
 * %c is for char
 * %l is for long
 * %lf is for double
 * %Lf is for long float
 * float precision:- example %9.5f, % -7.2f, etc
 *
 *
 * constants are fixed value that must not be changed during programme run time. example like pi, 3.14,5, 'c', "abc", etc.
 *
 * there are two ways to define a constant. They are
 *
 * 1. const keyword
 * 2. #define pre-process directive
 *
 * escape sequence are some character start with \ and work as single character inside a string literal or character. these escape sequence represents other meaning like:-
 * \n ==> new line
 * \t ==> horizontal tab
 * \v ==> vertical tab
 * \a ==> alarm or beep
 * \b ==> backspace
 * \f ==> form feed
 * \r ==> carriage return
 * \\ ==> back slash
 * \' ==> single quotes
 * \" ==> double quotes
 * \0 ==> Null
 * \? ==> question mark
 * \nnn ==> octal value
 * \xhh ==> hexadecimal value
 *
 * comments are ignored by compiler but we need these stuff for our easiness
 *
 * comments are two type
 * 1. single line ==> //
 * 2. multi line ==> /* nth line */
 */
#include <stdio.h>
#define PI 3.1416
int main()
{
    const float f = 7.898905;
    printf("%f\n", f);
    printf("%f\n", PI);
    return 0;
}

