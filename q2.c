// using while loope wap to display all the number between  20-50 which is devisible by 3//
#include <stdio.h>
int main()
{ 
    int a=20;

while (a<50)
{
if ((a%3)==0)
{
printf("\n%d\n",a);
}
    a++;
}
printf("%d",a);
    return 0;
}