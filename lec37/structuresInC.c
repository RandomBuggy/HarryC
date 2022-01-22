/*
 * structure is user defined data type in C language, structure allows user to combine different data type togather
 *
 * so we can make complex data type which can reserve memory space to store different different data.
 *
 * structure are similar to arrays but it can store data of any type, so practically it is more useful.
 *
 * to declare a structure, we use struct keyword,.
 *
 * syntax:- 
 *
 * struct structure_name {
 *      data_type variable;
 *      data_type variable;
 *      data_type variable;
 *      .
 *      .
 *      .
 *      data_type variable;
 *      } structure_variable_names separated by comma;
 * so, we have created a new data type as structure_name.
 *
 * all the other data type inside a structure is called that structure's member.
 *
 * we can assign value inside a struct_data_type variable using a {} brackets and putting value as array and these value will go inside the structure_member sequentially
 *
 * if you don't want to put value sequentially then use this dot(.) operator. In C, this dot(.) operator is called "structure member operator" and this operator take places between struct_data_type variable and its member like
 *
 *    structure_abc.member = value
 */
#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[30];
} harry, code; // global scope

void print() {
    strcpy(harry.name, "Good Boy");
    printf("Harry's name is %s\n", harry.name);
}
int main()
{
    struct Student {
        int id;
        int marks;
        char favChar;
    };
    struct Student Harry, Code; //local scope
    Harry.id = 1;
    Harry.marks = 33;
    Harry.favChar = 'a';
    Code.id = 2;
    Code.marks = 99;
    Code.favChar = 'c';
    printf("Code got %d marks\n", Code.marks);
    print();
    return 0;
}

