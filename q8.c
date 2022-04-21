//wap using while lope where sum of all digits are random number//
#include <stdio.h>
int main()
{
    int a,b,sum=0,rem;
    printf("enter your number");
    scanf("%d",&a);
    b=a;
    while (b != 0)
    {
        rem=b%10;
        b=b/10;
        sum=sum+rem;
        
    }
    printf("%d",sum);
    return 0;

}