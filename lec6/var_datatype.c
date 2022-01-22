/* variables are memory address of a programme's data * and datatype tells us that "What type of data is going to be entered(stored) inside a particular variable 
 * but you can not store a specific datatype into another specific data type's variable. because they(datatype) are designed for a single specific data to hold the data*/

/* In c language we char, float, int, double and many other datatypes are available */

/* terminology:- like "programmes load in the memory  = load in the RAM */

/* now main point is variable is nothing but a human understanding name of some memory location in C
 * declaration means reserving some space for the programme in memory and initialization means putting value inside a variable or a specific/reserved memory location during declaration time
 *
 * syntax:- 
 * to declare a single variable:- datatype var_valid_name(if variable is multiple then each of them separated by comma); means type var_name; 
 * to initialize a variable :- (of course single) type var_name = value; */

/* rules to name a variable:- 
 * 1.can contain and start with alphabets, _, only contains digits.
 * 2. cannot start with digits;
 * 3. no whitespace and reserved keywords are allowed
 * 4. valid example :- _abc, ff7, Main( not main)
 * 5. invalid example :- 7y, main, int, @sdf, $dd
 */

/* datatypes in C:-
 *
 * 1. Basic Data Type:- int, char, float, double
 * 2. Derived Data Type:- array, pointer, structure, union
 * 3. Enumeration Data Type:- enum
 * 4. void Data Type:- void 
 *
 * Now, Derived Data Type's are derived from Basic Data Type's means Basic Data Types is mendatory to Build Derived Data.
 * and void means blank in C Language
 */

/* data type, their memory consuming means their size (in the memory) and their value range(you can find the limit using combinatorix) in chart */

//## Type ########  Size ##########  Range #########,
/*## according to 32-bit architecture ## because memory range depends on computer architecture ##
 * ## char #### 1 byte ### -128 to 127 #######
 * ## signed char ## 1 byte ## -128 to 127 #####
 * ## unsigned char ## 1 byte ## 0 to 255 ####
 * ## short ##### 2 byte ## -32768 to 32767 ####
 * ## signed short ## 2 byte ## -32768 to 32767 ####
 * ## unsigned short ## 2 byte ## 0 to 65535 ####
 * ## int ####### 2 byte ## -32768 to 32767 #####
 * ## signed int ## 2 byte ## -32768 to 32767 ####
 * ## unsigned int ## 2 byte ## 0 to 65535 ####
 * ## short int ## 2 byte ## -32768 to 32767 ####
 * ## signed short int ## 2 byte ## -32768 to 32767 #
 * ## unsigned short int ## 2 byte ## 0 to 65535 ###
 * ## long int ## 4 byte ## -2147483648 to 2147483647
 * ## signed long int # 4 byte # -2147483648 to 2147483647
 * ## unsigned long int # 4 byte # 0 to 4294967295 ##
 * ## float ##### 4 byte ####               #####
 * ## double #### 8 byte ####               #####
 * ## long double # 10 byte ####            ######
 
 */


#include <stdio.h>

int main()
{
    printf("%lu\n", sizeof(int));
    return 0;
}


/* minimum basic knowledge about operators and functions
 * operators helps us to perform arithmatic, relational or bla bla bla operations.
 * basic arithmatic operators
 * 1. + ==> for addition
 * 2. - ==> for substraction
 * 2. * ==> for multiplication
 * 4. / ==> for division
 * 5. % ==> for reminder
 *
 *
 *
 * functions are like mathematical functions. they take input from us and give output to the console or to a output device
 * some basic important to know from scratch 
 * printf() is for printing value or other stuff generally in the console
 * scanf() is taking input from user through keyboard and also can puts value inside a variable
 * sizeof() is for telling the value consumed by a variable of specific data type in byte unit
 * if you want to store radix point numbers you might need float & double datatype. these two data types provides 6 to 7 digits (after radix point) accouricy but these float and double data type basically a 32 bit representation of real numbers
 */
