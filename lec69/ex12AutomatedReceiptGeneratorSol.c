#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* replaceWord(const char* str, const char* oldword, const char* neword) {
    char* resultString;
    int i, count = 0;
    int oldWordLength = strlen(oldword);
    int newWordLength = strlen(neword);
    for ( i = 0; str[i] != '\0'; i++ ) {
        if ( strstr(&str[i], oldword) == str[i] ) {
            count++;

            i = i + oldWordLength - 1;
        }
    }
    resultString = (char*) malloc( i + count * ( newWordLength - oldWordLength) + 1);
    i = 0;
    while ( *str ) {
        if (strstr(str, oldword) == str) {
            strcpy(&resultString[i], neword);
            i += newWordLength;
            str += oldWordLength;
        }
        else {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}


int main()
{
    FILE* f = NULL;
    FILE* f2 = NULL;
    f2 = fopen("billnew.txt", "w");
    f = fopen("bill.txt", "r");
    char str[90];
    fgets(str, 90, f);
    printf("%s\n", str);
    char* newStr;
    newStr = replaceWord(str, "{{name}}", "Harry");
    newStr = replaceWord(newStr, "{{item}}", "Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Random");
    newStr = replaceWord(newStr, "{{bill}}", "$5000");
    printf("%s\n", newStr);
    fprintf(f2, "%s", newStr);
    fclose(f);
    fclose(f2);
    return 0;
}

