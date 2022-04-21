//wap to find out perimeter of a circlr where radius is given by users//
#include <stdio.h>
int main()
{
    float pi=3.14,r,area,perimeter;
    printf("enter the radius of a circle\n");
    scanf("%f",&r);
    area=pi*(r*r);
    printf("the area of a circle is=%f",area);
    perimeter=2*(pi*r);
    printf("the perimeter of a circle is=%f",perimeter);


    return 0;
}