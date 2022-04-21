//wap to find out perimeter of a rectangle where height and wideth are given byu users//
#include <stdio.h>
int main()
{
    float h,w,perimeter,area;
    printf("enter the value of height and weidth");
    scanf("%f%f",&h,&w);
    area=h*w;
    printf("a\nrea of the rectangle is=%f",area);
    perimeter=(h+w)*2;
    printf("\nthe value of perimeter of the rectangle is=%f",perimeter);
    
    return 0;
}