#include <stdio.h>


typedef struct Driver {
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
} dr;

int main()
{
    dr d1, d2, d3;
    printf("Enter Your Driver Details Here\n");
    printf("Enter 1st Drivers Details Here\n");
    printf("Enter 1st Driver Name: ");
    scanf("%s", &d1.name);
    printf("Enter 1st Driver dlNo: ");
    scanf("%s", &d1.dlNo);
    printf("Enter 1st Driver kms: ");
    scanf("%d", &d1.kms);


    printf("Enter 2nd Drivers Details Here\n");
    printf("Enter 2nd Driver Name: ");
    scanf("%s", &d2.name);
    printf("Enter 2nd Driver dlNo: ");
    scanf("%s", &d2.dlNo);
    printf("Enter 2nd Driver kms: ");
    scanf("%d", &d2.kms);




    printf("Enter 3rd Drivers Details Here\n");
    printf("Enter 3rd Driver Name: ");
    scanf("%s", &d3.name);
    printf("Enter 3rd Driver dlNo: ");
    scanf("%s", &d3.dlNo);
    printf("Enter 3rd Driver kms: ");
    scanf("%d", &d3.kms);


    printf("*********** Printing Information for these Drivers ************\n");
    printf("For Driver 1:\nName is: %s\ndlNo is %s\nkms is: %d\nFor Driver 2:\nName is: %s\ndlNo is: %s\nkms is: %d\nFor Driver 3:\nName is: %s\ndlNo is: %s\nkms is: %d\n", d1.name, d1.dlNo, d1.kms, d2.name, d2.dlNo, d2.kms, d3.name, d3.dlNo, d3.kms);
 
    return 0;
}

