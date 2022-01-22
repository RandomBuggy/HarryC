/*
 * unit conversion using loop
 *
 * km to mile
 * inch to foot
 * cm to inch
 * pound to kg
 * inch to meter
 */
#include <stdio.h>


void kmtomile() {
    float km;
    printf("Enter Km Value: ");
    scanf("%f", &km);
    float mile = ( 0.6214 * km );
    printf("The Mile Value is %0.2f\n", mile);
}
int main()
{
    int input;
    while ( 1 ) {
        printf("\t\tWELCOME!! Unit Converter\n\n[>] Press Numeric Value to Perform A Task\n\n[1] Km to Mile: press 1\n\n[2] Inch to Foot: press 2\n\n[3] Cm to Inch: press 3\n\n[4] Pound to Kg: press 4\n\n[5] Inch to Meter: press 5\n\n[99] To EXIT: press 99\n\n[*] Enter Your Choice: ");
        scanf("%d", &input);
        if ( input == 99 ) {
            break;
        }
        else {
            switch(input) {
                case 1:
                    kmtomile();
                    break;
                default:
                    printf("Invalid Option? Try Again!\n");
            }
    }
}
    
    return 0;
}

