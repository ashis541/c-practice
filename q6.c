////wap using while lope wap the sum of 1st natural number input through key board//
#include <stdio.h>
int main()
{
    int a,b,i=0;
    printf("enter the number where u want to add");
    scanf("\n%d",&a);
    b=a;
    while(b<=a+10)
    {
          i=i+b;
       b++;
    }
    printf("\nthe sum of the no is\n%d",i);
    return 0;
}