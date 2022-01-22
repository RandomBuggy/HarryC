/*
 * uninitialized pointer are wild pointers, because only by declaring a pointer, we point to a random address .
 * so, if wild pointer is dereferenced then programme may crash, or cause some nesty bugs because of random address
 * it is suggested to initialize pointer with NULL
 */
#include <stdio.h>
#include <stdlib.h>
/*
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include <string.h>
 * #include <conio.h>
 * #include <regex.h>
 * #include <tidy.h>
 * #include <curl/libcurl.h>
 */
int main()
{
    int a = 34;
    int* ptr;
    //*ptr = 3;
    ptr = &a;
    printf("Value: %d\n", *ptr);
    return 0;
}

