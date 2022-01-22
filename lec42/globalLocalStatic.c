
/*
 *
 * scope is a region out of where a variable can not be accessed.
 *
 * local variable scope is where it has declared or initialized. like in a function or in a block. 
 *
 * so, in case of global variable it is declared outside the main() function also to get of local variable . so, it can be accessed or modified from anywhere.
 *
 * formal parameters are treat as local variable, if the same name has both local and global variable, the local gets priority means the value we get from local variable
 *
 * now, static variable are mysterious type variable in C, they preserve their value even they go out of their scope, they remains in the memory the whole run time.
 *
 * static variable takes value from previous scope and can not be initialized again, if not initialized diring declaration then vompiler will set static variable's value to 0, static variable can only be initialized by constant value, not another variable or a functiin's return value
 * the "static" keyword is used in C, to declare/define  a static variable in C
 */
#include <stdio.h>

int ret() {
    return 5 * 3;
}

int b = 7574;
int func(int b1) {
    static int var;
    printf("By default Static variable init with 0\n");
    static int myvar = 0;
    printf("myvar's value: %d\n", myvar);
    myvar++;
    printf("Value inside func is %d\n", b);
    printf("Address of b inside func is %d\n", &b);
    return b1 * 10;
}


int main()
{
    int b = 344;
    printf("Address of b inside main is %d\n", &b);
    int val = func(b);
    int i = 0;
    while ( i < 4 ) {
        val = func(b);
        i++;
    }
    int* ptr = &val;
    printf("The value of func() is %d\n", val);
    return 0;
}

