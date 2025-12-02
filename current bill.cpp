#include<stdio.h>
int main()
{
	int units;
	float amount,charge,total_amount;
	printf("Enter the units:");
	scanf("%d",&units);
	if(units<=50)
	{
	amount=units*2.50;
	charge=30;
	}
	if(units<=100)
	{
	amount=units*3.00;
	charge=50;
	}
	if(units<=200)
	{
	amount=units*3.50;
	charge=75;
	}
	if(units<=300)
	{
	amount=units*4.0;
	charge=100;
	}
	else{
	
	amount=units*5.0;
	charge=125;
    }
	
	total_amount=amount+charge;
	printf("the total amount is:");
	printf("%.2f",total_amount);
     
	return 0;
	
	
	
	
}
