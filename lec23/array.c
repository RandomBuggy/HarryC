/*
 * Array is a special type of variable which stores a collection of data of the same datatype.
 *
 * array's items are stored in a contiguous ( one after one ) memory location.
 *
 * it can store derived data types also like pointers, structures etc.
 *
 * The C language put restriction at the dimension number of array. dimension means as you understand like normal geometric dimensions.
 *
 * one dimensional array is like a list
 *
 * list
 *
 * => => => => => => => => (list example)
 *
 *
 * two dimensional array is like a table/chart.
 * 
 *
 * table
 *
 *
 * => => => => => => => =>
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  .
 * ^  .  .  .  .  .  .  . ( table )
 *
 *
 * some text refers to one-dimensional array like vectors, some refers to two-dimensional array like matrix, in general the word 'array' has dimension unspecified or unimportant.
 *
 *
 *
 * advantages of arrays 
 *
 * with array code is sometimes more organized and readable
 *
 * it is used to represent multiple data of same type  by a single name ( single variable)
 *
 *
 * accessing a element of a array is very fast
 *
 *
 * properties of array
 *
 *
 * all data is stored in a contiguous memory location
 *
 * all the memory block is of same size
 *
 * array's element can be accessed very quickly using base address or the index
 *
 *
 *
 * syntax of declaring or initializing a array
 *
 * data_type array_valid_name[size in integer value];
 *
 * declare and init array
 *
 * data_type array_valid_name[size in integer value] = { multiple, value ( element ), separated, with, comma} // this case size is not mandatory because declaration with initialization C automatically calculate the array's size
 *
 * accessing/entering value
 *
 * array_valid_name[nth size means index num] = value
 *
 * accessing
* array[index]
*
*
* 2d and nth d array declaration
*
* type array[row/size 1] [column/ size];
*
* nth d array declaration
*
* type array[size 1] [size 2] [size 3] [size nth];
*
* array index number start from 0 to nth size and array is mutable ( means array's each index is changable, array is special type of variable, so array next initialization update its nth index's value
*
* disadvantages of array
* array are fixed size, directly can not be increased or decreased the size
*
* lack of contiguous memory, array can not be declared
*
* poor time complexity to insert and deletion operation in array
*
* if enough element is not available free index is wastag
*
*
*/
#include <stdio.h>

int main()
{
    int marks[5];
    for( int i = 0; i < 5; i++ ) {
        printf("Enter %d number element: ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++ ) {
        printf("%d element is %d\n", i, marks[i]);
    }
    int marks2[6] = {9,5,7,2,1,3};
    for (int i = 0; i < 6; i++ ) {
        printf("marks2[%d]: %d\n", i, marks2[i]);
    }
    int mark[4][5] = {{1, 2, 3, 4}, {5, 4, 3, 2, 1}};
    for ( int i = 0; i < 4; i++ ) {
        for (int j = 0; i < 5; j++ ) {
            printf("%d    %d : %d\n", i, j, mark[i][j]);
                    }
                    }
    return 0;
}

