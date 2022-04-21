//just showing a 2D array
#include <stdio.h>
int main()
 {
int a[3][3],m,n,c,r;
printf("enter the values");
scanf("%d%d",&c,&r);
for(m=0;m<c;m++)
for(n=0;n<r;n++)
scanf("%d",&a[m][n]);
for(m=0;m<c;m++)
for(n=0;n<r;n++)
printf("%d ",a[m][n]);
printf("\n");
return 0;
}