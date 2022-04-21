#include <stdio.h>
int main()
{
   int a,b,c,d;
 printf("put the value of the numbers");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
 if (a<b)
    {
     if (a<c)
        {
            if (a<d)
            {
             printf("a is small among all");
            }
        }

    }
 if (b<c)
 {
     if (b<d)
    {
       if (b<a)  
           {
             printf("b is small among all");

            } 
    }
 }
  if(c<a)
   {
       if (c<d)
        {
            if (c<b)
            {
                printf("c is small among all");
            }
        }
   }
   if(d<a)
   {
       if (d<b)
       {
           if (d<c)
            {
                printf("d is small among all");
            }
       }
   }

 return 0;
}