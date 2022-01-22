/*
 * the #undef directive undefined a macro
 *
 * #ifdef it return true if provided condition about pre-processor directive or macros is drfined
 *
 * #ifndef means not defined just reverse of #ifdef
 *
 * #pragma is used to issue special commands to the compiler
 *
 * more
 * #if
 * #else
 * #elif
 *
 * there are pre-defined macros in C,
 * they are
 *
 * __DATE__ ==> current date as character literal "MMM DD YYYY" format.
 *
 * __TIME__ ==> contains current time as "HH:MM:SS" format
 *
 * __FILE__ ==> the current file name as string literal
 *
 * __LINE__ ==> the current line number as decimal constant
 *
 * __STDC__ ==> defined as 1 if programme compiles with ANSI standerds
 *
 */
#include <stdio.h>

int main()
{
    printf("the file name is %s\n", __FILE__);
    printf("today's date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("line no is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    return 0;
}

