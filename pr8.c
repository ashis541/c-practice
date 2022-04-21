#include <stdio.h>
int main()
 {
int n,i;
float sum=0,x;
printf("enter no of elements");
scanf("%dd",&n);
printf("enter no of element");
for(i=0; i<n; i++)
{
    scanf("%f",&x);
    sum +=x;  
}
printf("the number is %f",sum/n);

return 0;
}