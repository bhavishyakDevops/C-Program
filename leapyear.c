#include<stdio.h>
#include<stdlib.h>
void main()
{
  int year;
  system("clear");
          printf("\n enter any year");
  scanf("%d",&year);
          
           if(year%400==0)
           {
               printf("\n given year is leap year %d",year);
           }
                else
                 {
                      if(year%100==0)
                         printf("\n given year ia leap year %d",year);
                 }
           if(year%4==0)
          {
              printf("\n given year is leap year %d",year);
          }
          else
               printf("\n given year is not a leap year %d",year);
}
          
