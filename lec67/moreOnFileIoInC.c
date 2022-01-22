/*there are several modes to open a file:-
 * r
 * w
 * a
 * r+
 * w+
 * a+
 * r mode:- open an existing file in read mode. reading starts from the beginning of a file.
 *
 * w mode:- opean file for writing if file not exist, then create new one and stort writing from scratch
 *
 * a mode:- open file for both writing and appending if not exist then new one start write-append from the end of the file
 *
 * r+ mode:- open file for both reading and writing
 *
 * w+ mode:- this also can does reading and writing, if file not exist then new one and if exist then blank the file, start writing from zeroth point
 *
 * a+ mode:- this is used for both reading and writing, if file not exist then create new one. reading start froom the zeroth index but writing start from the appending mode.
 *
 * there are also various several string in the c standerd library which can perform character by character reading or writing even read as a fixed length string
 * some are:-
 * fputc()
 * fputs()
 * fgetc()
 * fgets()
 *
 *
 * at last c ==> character, and at last s ==> string.
 *
 * the fputc() function:-
 * it can write character into a file.
 * its syntax is int fputc(character, fptr);
 * it return the character ascii value, if success
 * or, return EOF , if fails
 * the EOF is defined in stdio.h (EOF ==> End Of File)
 *
 * the fputs() function:-
 *
 * the fputs() function is used to put null terminated string in a file
 * its syntax is int fputs(string [ or char array's pointer], file pointer)
 *
 * the fgetc() function:-
 *
 * it can read single from file
 * it's syntax is int fgetc(file pointer)
 * it return the readed character, if success
 * and return EOF, if fails
 *
 * the fgets() function;-
 *
 * it is used to read null terminated string from a file
 * its syntax is fgets(array pointer, number of character, file pointer)
 */
#include <stdio.h>

int main()
{
    FILE* ptr = NULL;
    ptr = fopen("demo.txt", "r");
    char ch = fgetc(ptr);
    printf("the readed character is %c\n", ch);
    ch = fgetc(ptr);
    printf("the readed character is %c\n", ch);
    char str[4];
    fgets(str, 3, ptr);
    printf("The String is %s\n", str);
    //FILE* f = fopen("demo2.txt", "w");
    //FILE* f = fopen("demo2.txt", "r+");
    //FILE* f = fopen("demo2.txt", "w+");
    FILE* f = fopen("demo2.txt", "a+");
    fputc('t', f);
    fputs("hfuffufdhdytdysdyrrieieeriee7reirridrorotoyeisuwurjsjssjtsidkfydyroftudouridoyrtsirkystjsjydgdufjtsjyrjtdlurkyskyrkydkydjtstjdkshreiydkgdjytjsjtdtsyryq7eu4w743u4q3y2754o7riteiyriytpiti6roufiydiyryksiydoyfitdiydjtsiydydoytitsyiriyeuteo7rtie7orjsutw4q643i5wyew6iwu4ei6rourtudiydjtsjtxkgzjfdkydieyirite", f);
    char c = fgetc(f);
    printf("%c\n", c);
    char tt[10];
    fgets(tt, 9, f);
    printf("%s\n", tt);
    fclose(f);
    fclose(ptr);
    return 0;
}

