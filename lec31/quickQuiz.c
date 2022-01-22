#include <stdio.h>

void Reference( int *ptr1, int *ptr2) {
    int temp1, temp2;
    temp1 = *ptr1;
    temp2 = *ptr2;
    *ptr1 = temp1 + temp2;
    *ptr2 = temp2 - temp1;
}
int main()
{
    int a = 3, b = 4;
    printf("%d %d\n", a, b);
    Reference(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

