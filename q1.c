//using switch case write programme to display month name if month number input through keyboard?//
#include <stdio.h>
int main()
{
   int num;
   printf("enter the no of your month");
   scanf("%d",&num);
   
   switch(num)
   {
       case 1:
        printf("jan");
        break;
        case 2:
        printf("frb");
        break;
        case 3:
        printf("mar");
        break;
        case 4:
        printf("apr");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("jun");
        break;
        case 7:
        printf("jul");
        break;
        case 8:
        printf("aug");
        break;
        case 9:
        printf("sep");
        break;
        case 10:
        printf("oct");
        break;
        case 11:
        printf("nov");
        break;
        case 12:
        printf("dec");
        break;
        default:
        printf("try again");
        break;
   } 

  
    return 0;
}