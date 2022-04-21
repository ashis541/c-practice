//wap using while lope to find a^b//
#include <stdio.h>
 int main()
{
    int a,b,result=1;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
while (b!=0)
{
    result=result*a;
    b--;
}
printf ("the value is %d",result);
    return 0;
}