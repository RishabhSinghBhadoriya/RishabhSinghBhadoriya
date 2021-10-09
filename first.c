/* program to convert celcius to fareniet */
#include <stdio.h>
int main()
{
    int celcius,fareniet;
    printf("enter values of temperature in celcius: ");
    scanf("%d",&celcius);
    fareniet = 1.8*celcius+32;
    printf("the value in fareniet: %d\n", fareniet);
}
