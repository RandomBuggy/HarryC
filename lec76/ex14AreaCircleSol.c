#include <stdio.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2) {
    int d = sqrt( (y2 - y1 ) * (y2 - y1) + ( x2 - x1 ) * ( x2 - x1 ) );
    return d;
}

float areaCircle(int x1, int y1, int x2, int y2, float (*distance) (int x1, int y1, int x2, int y2)) {
    return distance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);
    dst = areaCircle(x1, y1, x2, y2, Edistance);
    printf("%f\n", dst);
    return 0;
}

