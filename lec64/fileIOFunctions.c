/*
 * to work with files, we have to declare a FILE pointer. this pointer helps us to initialize or modify files. best practice is that initialize the pointer with NULL.
 *
 * there are several types of functions in the stdio.h header file. some of them are
 * 1.fopen();
 *
 * fopen() function is used to open a file from volatile memory. it takes two argument file path and mode, returns a FILE pointer. pass both the argument as string.
 *
 * mode means the purpose for opening a file. so, if we wamt to:-----
 * read ==> 'r'
 * write ==> 'w'
 * append ==> 'a'
 * read + write ==> 'r+'
 *
 * also if you want to do above task with binary files, just concat the character b after above mentioned modes example like "rb".
 * warning:- any file is opened by C programme is need to be closed.
 * so, we use fclose() stdio.h's function. it take a FILE pointer as argument.
 *
 * to read a file we have to use the fscanf() library (from stdio.h) function. it takes 3 argument, first one is a FILE pointer, then a format specifier to detect what the data is in the file and last one is a char/string or other thing that you want to search in the file.
 *
 * in order to read from a file, file must be opened as 'r' (or 'r+') mode.
 *
 * to write a file we have to use the fprintf() library function( from stdio.h). it takes 3 argument. first one is FILE pointer, second one is a format specifier to detect what type of data is to be written inside a file, last one is the data.
 *
 * in order to write a file, file must be opened as 'w' (or 'r+') mode.
 *
 */
#include <stdio.h>

int main()
{
    FILE* f = NULL;
    f = fopen("demo.txt", "r");
    char data[10];
    fscanf(f, "%s", data);
    printf("Content of the file: %s\n", data);
    FILE* F = NULL;
    F = fopen("demo.txt", "w");
    fprintf(F, "%s", "data data");
    printf("data written\n");
    FILE* fi = NULL;
    fi = fopen("demo.txt", "a");
    fprintf(fi, "%s", "new data");
    
    return 0;
}

