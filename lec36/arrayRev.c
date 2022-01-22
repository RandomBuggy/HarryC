/*
 * declare and initialize a one dimensional array, then print the array 
 *
 * make your own function passing the array and reverse it and print it again.
 */
#include <stdio.h>

void arrayRev(int arrayy[]) {
    int temp;
    for ( int i = 0; i < 7 / 2; i++ ) {
        temp = arrayy[i];
        arrayy[i] = arrayy[6 - i];
        arrayy[6 - i] = temp;
        }
}

void arrPrt(int a[] ) {
    for ( int i = 0; i < 7; i++ ) {
        printf("The element at index %d is %d\n", i, a[i]);
    }
}


int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7 };
    arrPrt(a);
    arrayRev(a); //base address
    arrPrt(a);
    return 0;
}

