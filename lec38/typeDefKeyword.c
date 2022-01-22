/*
 *
 * typedef is a keyword in C language. this keyword is used to give alternative names to a existing datatype.
 *
 * syntax:- 
 *
 *  typedef previous_name alias_name;
 *
 *  like typedef unsigned long ul;
 *
 *  you can use both previous_name and alias_name to specify data type and make variable by using them
 *
 *
 *  important thing is if you declare multiple pointer for any data type the compiler will only detect the first variable as pointer and all the other as normal variable.
 *  so, to solve this we can use typedef keyword
 */
#include <stdio.h>

typedef struct Student {
    int id;
    int marks;
    char fav;
    char name[20];
} dd;

int main()
{
    typedef unsigned long ul;
    ul a, b;
    a = 45;
    printf("Value of a is %lu\n", a);
    struct Student stu;
    stu.id = 34;
    stu.marks = 100;
    stu.fav = 'f';
    //stu.name = "dj";
    printf("Value of stu's id is %d\n", stu.id);
    dd p;
    p.id = 90;
    printf("value of p's id is %d using typedef\n", p.id);
    typedef int* intptr;
    intptr c, d;
    c = &a;
    d = &b;
    return 0;
}

