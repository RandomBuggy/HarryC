/*
 * unions are similar to structures, but the only difference is it use shared memory space for each member , the size of the memory space is the size of the largest member. in its syntax, replace struct keyword with union keyword.
 *
 * in, union data type only one be active at a time, so, others data ( stored value) is overwrited.
 *
 */
#include <stdio.h>
#include <string.h>

struct student {
    int id;
    int marks;
    char fav_char;
    char name[14];
};
union Student {
    int id;
    int marks;
    char fav_char;
    char name[14];
};

union un {
    int inte;
    float flo;
    char chrct;
};
int main()
{
    union un a;
    a.inte;
    a.flo;
    a.chrct;
    typedef struct student s1;
    typedef union Student s2;
    s1 c;
    s2 d;
    d.id = 456;
    printf("%d\n", c.id = 1);
    printf("%d\n", c.marks = 0);
    printf("%c\n", c.fav_char = 'm');
    printf("%s\n", strcpy(c.name, "ANCD2"));
    printf("%s\n", strcpy(d.name, "string_copied"));
    printf("%d\n", d.id = 2);
    printf("%d\n", d.marks = 99);
    printf("%c\n", d.fav_char= 'e');
    return 0;
}

