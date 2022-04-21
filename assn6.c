#include <stdio.h>
int main()
{
    float celcius,kelvine;
    printf("enter your temperature in kelvine");
    scanf("%f",&kelvine);
    celcius=kelvine-273.15;
    printf("the temperature you put is equal to\n%fkelvine",celcius);
    

    return 0;
}