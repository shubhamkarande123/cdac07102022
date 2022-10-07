#include "Assignment1.h"
#include<cstdio>

int main(void)
{	
	
	double amount;
	int period;
	double intrest = 0;
	int itype = 0;
	bool type = true;


	printf("Enter the amount : ");
	scanf("%lf",&amount);
	
	printf("Enter the Period : ");
	scanf("%d",&period);

	printf("Enter the type interest calculation\n 0.Simple Interest \n 1.Compound Interest\n Enter the Choise: ");
	scanf("%d",&itype);

	Investment a(amount,period);
	if(itype == 0)
	{
		type = true;
	}
	else
	{
		type = false;
	}

	double result;
	result = a.GetInterest(type);
	printf("Calculate interest : %0.2lf\n", result);
}




	
	





