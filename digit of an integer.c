
#include<stdio.h>
#include<conio.h>
void main()
{
int count,k;
printf("enter the number");
scanf("%d",k);
while(k!=0)
{
k=k/10;
count++;
}
printf("%d",count);
}
