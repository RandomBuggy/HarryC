/* in general operators are symbols that is used to perform operations between or among operators.
 * In C, we have
 * 1. Assignment Operators
 * 2. Arithmetic Operators
 * 3. Relational Operators
 * 4. Logical Operators
 * 5. Bitwise Operators
 *
 * 1. Arithmetic Operators are those operators that helps us to perform basic mathematical operations. Arithmetic operators are 5. they are
 * a. addition ==> + 
 * b. subtraction ==> -
 * c. multiplication ==> * 
 * c. division ==> /
 * e. modulus ==> %
 *
 * 2. Relational Operators helps us to find relation between two operands and if the relation is correct then these operators returns boolean ture or boolean false value. relational operators are 6. they are
 * a. equal to ==> ==
 * b. not equal to ==> !=
 * c. less than ==> <
 * d. greater than ==> >
 * e. less than or equal to ==> <=
 * f. greater than or equal to ==> <=
 *
 * 3.Logical Operators are sir George Bool's logic based oprators. they are named as they perform their boolean logic gate simulation. they are 3 type. they are
 * a. AND operation( left bool 1 && right bool 1) ==> &&
 * b. OR operation( left/right bool 0 then tesult bool 1) ==> ||
 * c. NOT operation( inverse bool value means 0 to 1 or 1 to 0) ==> !
 *
 *
 * 4. Bitwise Operators apply boolean logic gate binary bit by bit. they are 3. they are
 *
 * a. bitWise AND ==> &
 * b. bitWise OR ==> |
 * c. bitWise XOR ==> ^ (means XOR operation needs at least 1 boolean true && 1 boolean false
 *
 * more bitWise are
 *
 * i. ~ ==> one's complement
 * ii. << ==> binary left shift
 * iii. >> ==> binary right shift
 *
 *
 * 5. Assignment Operators are to assign value to a variable. They grabe value from left side and put it into the left side. They are 5. they are
 * a. = ==> equivalent to a = 1
 * b. += ==> equivalent to a = a + bla_bla_bla
 * c. -= ==> equivalent to a = a - bla_bla_bla
 * d. *= ==> equivalent to a = a * bla_bla_bla
 * e. /= ==> equivalent to a = a / bla_bla_bla
 *
 * 6. Miscellaneous Operators are various type of other operators. like
 *
 * a. sizeof() ==> basically it is a function which returns buffer size of a variable/datatype
 * b. & ==> returns the adddress of a variable
 * c. * ==> pointer to a variable
 * d. ? : ==> conditional expression ( like if bla? do x task : else do Y task
 */
#include <stdio.h>

int main()
{
    int a, b;
    a = 9;
    b = 7;
    printf("a + b = %d\n", a + b);    
    printf("a - b = %d\n", a - b);    
    printf("a * b = %d\n", a * b);    
    printf("a / b = %d\n", a / b);   
    printf("a % /b = %d\n", a % b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a < b = %d\n", a < b);
    printf("a > b = %d\n", a > b);
    printf("a <= b = %d\n", a <= b);
    printf("a >= b = %d\n", a >= b);
    printf("%d\n", a && b);
    printf("%d\n", a || b);
    printf("%d\n", !(a && !b));
    printf("%d\n", a & b);
    printf("%d\n", a | b);
    b = 0;
    printf("%d\n", a ^ b);
    b = 5;
    printf("%d\n", a ^ b);
    return 0;
}

