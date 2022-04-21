#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,band c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) 
        printf("%d is greatest among all",a);
    if(b>a && b>c)
        printf("%d is greatest among all",b);
    if(c>a && c>b)
        printf("%d is greatest among all",c);


    return 0;
}