#include <stdio.h>
int main()
 {
float w1,w2,c1,c2,total,avg;
printf("enter the value of w1 and w2");
scanf("%f",&w1);
scanf("%f",&w2);
printf("enter the value of c1 and c2");
scanf("%f",&c1);
scanf("%f",&c2);
total=w1*c1+w2*c2;
printf("%f",total);
avg=total/(c1+c2);
printf("%f",avg);
return 0;
}