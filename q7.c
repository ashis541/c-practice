//wap using while lope to display the number between 20-50 which isdevisible by 3 in reverse order//
#include <stdio.h>
int main()
{
    int a=50,i=0;
    while (a>=20)
    {
        if ((a%3)==0)
        {
        printf("\n%d\n",a);
        }
        a--;
    }
    printf("\n%d\n",a);
    
    return 0;
}