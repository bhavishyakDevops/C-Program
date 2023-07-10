#include<stdio.h>
#include<stdlib.h>
void main()
{
char operator;
double num1,num2;
system("clear");
printf("\n enter an operator(+, -, *, /):");
scanf("%c",&operator);
printf("\n enter two operands: ");
scanf("%lf %lf",&num1,&num2);
switch(operator)
{
case '+':
        printf("\n %.llf + %.llf =%.llf\n\n",num1,num2, num1+num2);
        break;
case '-':
 printf("\n %.llf - %.llf =%.llf\n\n",num1,num2, num1-num2);
break;
case '*':
 printf("\n %.llf * %.llf =%.llf\n\n",num1,num2, num1*num2);
break;
case '/':
 printf("\n %.llf / %.llf =%.llf\n\n",num1,num2, num1/num2);
break;
default:
printf("\n error..! given input values or not valid");
}
}

