/*
 * pointer is nothing but a variable
 *
 * we know before, for each variable the compiler reserve some space in memory according to data, that reserves space has definitely a address deeply memory address, so if we want to store the address of a particular reserved memory location we can use another variable to store the location of a specific data type reserved space. so, the special variable is called pointer (in general term) in programming language and read as like xyz point to pqr, so xyz is a pointer( variable) that points to the address of a pqr variable.
 *
 *
 * to declare a pointer we trick some technique after the C language.
 *
 * first, we know about two operator
 *
 * & ==> address of ( operator )
 * * ==> dereference operator ( sometime called indirection operator )
 *
 * so, the & operator return the address of a variable like &x means the address of a variable
 *  and the * operator takes address of a variable and goto that address and grab the value from that reserved address,
 *
 *  we declare pointer with the help of these two operator
 *if we think deeply that the pointer is variable. so, it has its own reserved address, we can put its address into another pointer. these type of pointer is called pointer to pointer ( a pointer that points too another pointer variable )
 *
 * now, when we declare a variable either we reserve memory space, the space randomly get some value, in programming the value is known as garbage value. to avoid these garbage condition and we only want to declare, not initialize address value we can use NULL as value ( null means nothing or zero ). so, now the pointer is called null pointer.
 *
 * pointer can point to ( address ) many things like
 *
 * int, char, float, array, function or another type of pointer
 *
 * pointer size depends on architecture. for example :- 2 bytes for 32-bit OS
 *
 * In C programming language, pointer can be declared using the * ( asterisk ) symbol
 *
 * two format specifiers:-
 *
 *  /%x ==> print value in hexa-decimal
 *
 *  /%p ==> print stored address of a pointer
 *
 *  use of pointer
 *
 *  dynamic memory allocation
 *
 *  array, function and structure
 *
 *  return multiple value from a function
 *
 *  reduce the code and improve performance
 *
 *  syntax:-
 *  data_type *variable_valid_name = &target_variable_name
 *
 */
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    int *ptr = &a;

    printf("The value of a using & is %d\n", a);
    printf("The value of a using pointer is %d\n", *ptr);
    printf("The value of a: %d\n", a);

    printf("The address of a by pointer is %p\n", ptr);
    printf("The address of a: %p\n", &a);
    printf("The address of pointer is %p\n", &ptr);
    printf("The address of a is %x\n", ptr);

    printf("The address of pointer is %x\n", &ptr);
    int *ptr2 = NULL;
    int *ptrg;
    printf("NULL pointer garbage value: %p\n", ptrg);
    printf("NULL pointer value: %p\n", ptr2);
    printf("NULL pointer address: %p\n", &ptr2);
    return 0;
}

