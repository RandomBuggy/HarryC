#include <stdio.h>
#include <string.h>
int main()
{
    struct student {
        int id;
        int mark;
        char name[10];
    } Harry, Shubham;
    printf("Harry id: %d\n", Harry.id = 1);
    printf("Harry mark: %d\n", Harry.mark = 100);
    printf("Harry name: %s\n", strcpy(Harry.name, "HARRY"));
    printf("Shubham id: %d\n", Shubham.id = 2);
    printf("Shubham mark: %d\n", Shubham.mark = 0);
    printf("Shubham name: %s\n", strcpy(Shubham.name, "SHUBHAM"));
    return 0;
}

