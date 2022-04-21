
#include <stdio.h>
int main()
{
   int remainingday,year,weak,day,total;
   printf("enter the days");
   scanf("%d",&day);
   year=day/365;
   printf("the days u enter is equal to=%dyear",year);
   weak=(day%365)/7;
   printf("%dweak",weak);
   total=(year*365)+(weak*7);
   remainingday=day-total;
   printf("%ddays",remainingday);



    return 0;
}