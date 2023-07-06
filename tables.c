#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,table;
system("clear");
printf("\n Enter how many tables you want");
scanf("%d",&table);
for(i=2;i<=table;i++)
{
 for(j=1;j<10;j++)
{
printf("\n%d*%d=%d",i,j,i*j);
}
printf("\n");
}
}

