#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,securemark,totalmark=300,percentage;
 printf ("enter your obtained mark in three subject");
    scanf("%f%f%f",&sub1,&sub2,&sub3);
    securemark=(sub1+sub2+sub3);
    percentage=(securemark/totalmark)*100;
    printf("%f",percentage);
    return 0;

}