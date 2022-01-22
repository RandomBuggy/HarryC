/*
 * static or other variables like array have their fixed size in memory
 *
 * but this is not a optimal way because memory is a very important resource it C language
 *
 * it waste many memory resources
 *
 * so, we can request memory or free memory in runtime which called in c "Dynamic Memory Allocation"
 *
 * so, difference between static and dynamic memory allocation.
 *
 * static memory allocated before execution but dynamic memory allocated during execution 
 *
 * static memory can not be freed during runtime but dynamic memory can be freed during run time
 *
 * static memory method is less efficient but dynamic memory method is more efficient
 *
 * so, to understand memory allocation in C, we have to understand the memory layout of C language
 * there are four segment of any typical architecture of computer in C language
 *
 * code :- in this segment our code/instruction is stored
 *
 * static or global :- here our static/global variable's memory allocated(reserved), it has two sub parts 1. data :- initialized variable get space here
 *
 * bss :- declared only variable get space here
 *
 * stack :- this storage grows up as programme go ahead
 * heap :- it grows up when dynamic memory allocation is used, actually to use heap storage area is called dynamic memory allocation
 *
 * In execution time some stack memory will be reserved for main(), if any other function is called by main function then it stay in stack above the main(), first recently called function will perform its task then return value to its parent function. the ordinary memory will freed first and at last main() reserved memory space will freed in stack storage type memory. so, for this stack is called LIFO storage a.k.a Last In First Out
 *
 * heap is a dynamic memory storage, it grows reversed arrow direction.
 *
 * means if stack grow up_arrow_direction then the heap storage grow down_arrow_direction.
 *
 * if stack and heap storage overwrite ( mixed ) one another it will grow heap part upon the stack part.
 *
 * and this situation is called as stack overflow. as the stack obey LIFO principle, so if you overload stack then the older function may out of the stack and stack is overflowed. by the way, stack space allocates our compiler according to our system (cpu) architexture. a typical example of stack overflow can be recursions 
 *
 * the heap is a dynamic structured memory, so, to use it we simply create a pointer an d point to a heap address, the address is stored in a local variable in main function
 *
 * but a big disadvantage of heap is until we give command to free the allocated heap space, the space will be joined to our programme's own memory space and remains allocated with no use
 */
#include <stdio.h>

int main()
{
    
    return 0;
}

