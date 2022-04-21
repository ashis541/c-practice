#include <stdio.h>
int main()
{
    float radius,area,perimeter;
    printf("enter the radius of a circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf ("area of the circle is\n%f",area);
    perimeter=2*3.14*radius;
    printf ("\nthe perimeter of the circle is\n%f",perimeter);


    return 0;
}