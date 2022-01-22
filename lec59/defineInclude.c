/*
 * #include pre-processor commands brings partial or full content of some other file to the current file.
 * also the file may have #include to another file means this can flow recursively
 * most of the cases the #include attach a "*.h" file to the current file, *.h means header file
 * most proberbly the *.h its inside function prototype is written.
 *
 * there are two formats to use with #include, they are with <> or " ", difference between angle brackets and quotes is the angle brackets first search for the file in the system library ( mostly in linux, /include) then search in the current directory but quotes first search for the file in the current directory then search for inthe system directory. both of them if found the file in the first try then don't search for the other case.
 *
 * and disk/storage path is also allowed but discourage since it is not portable but absolute path is more discouraged and relative path is less discouraged.
 *
 * #define is used to define pre-processor variables
 * again its can be used to replace word with number globally in the programme but not physically replace the word
 * it act as an editor which globally search_and_replace till the end of the file.
 *
 * the #include can also be used for debugging
 * wecan use printing statements while debugging
 * we can do that with #ifdef block
 * the #define can be also used to make macros
 * macros work like a function but as they pre-processed in the first phase. so, macros are very faster
 * you don't need to put ; at end of pre-processor directive
 */
#include <stdio.h>
//#include "../lec40/*"
#define PI 3.14
#define SQUARE(x) x * x
int main()
{
    int p = 4;
    printf("%f\n", PI);
    printf("Area of circle is: %0.2f\n", PI * SQUARE(p));
    return 0;
}

