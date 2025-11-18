#include<stdio.h>
int main()
{
int a,b,c,d,e,sum,avg;
printf("enter 5 subjects marks");
scanf("%d%d%d%d%d,&a,&b,&c,&d,&e");
sum=a+b+c+d+e;
avg=sum/5;
printf("sum is:%d\n",sum);
printf("Average is:%d",avg);
return 0;
}


