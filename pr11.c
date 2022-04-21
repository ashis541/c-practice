// addition of 2d array (simmilar for subtraction)
#include <stdio.h>
int main()
 {
int a[5][5],b[5][5],c[5][5],i,j;
printf("enter the value");
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
        printf("enter the value");
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        scanf("%d",&b[i][j]);
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    c[i][j]=a[i][j]+b[i][j];   
        for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    printf("%d ",c[i][j]); 
    printf("\n");
return 0;
}