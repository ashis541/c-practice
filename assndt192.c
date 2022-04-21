#include <stdio.h>
int main()
{ 
    int p;
 printf("enter your percentage");
scanf("%d",&p);
if (p<=60)
    printf("you are fail");
if (p>60 && p<=70)
    printf("you are in 3rd devision");
if (p>70 && p<=80)
    printf("you are in 2nd devision");
if (p>80 && p<=100)
    printf("congo dude");

    return 0;
}