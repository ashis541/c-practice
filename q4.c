//write a programme to find the fractorial of any number using while loope//
#include <stdio.h>
int main()
{
    int fact=1,num,i;
    printf("enter your number\n");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        i++;
        

    }
    
printf("%d",fact);
    return 0;
}