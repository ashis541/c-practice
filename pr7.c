#include <stdio.h>
int main()
 {
int a,b,choice;
char option='y';
do
{
    printf("enter your choice");
    scanf("%d",&choice);


 switch(choice)
{
    case1:
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    break;
    case2:
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d",a-b);
    break;
    case3:
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d",a*b);
    break;
    case4:
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d",a/b);
    break;
    default:
    printf("enter valid no");
}
 printf("do u want to continue");
 scanf("%c",&option);
{
 while(option=='y');

}
return 0;
}