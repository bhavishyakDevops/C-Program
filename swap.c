#include<stdio.h>
#include<stdlib.h>
void main()
{
   int num1,num2,temp;
   system("clear");
   printf("\n enter first number: ");
   scanf("%d",&num1);
   printf("\n enter second number: ");
   scanf("%d",&num2);
temp=num1;
num1=num2;
num2=temp;
printf("\n %d is number after swaping \n",num1);
printf("\n %d is number after swaping \n",num2);
}

