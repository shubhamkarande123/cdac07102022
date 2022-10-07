#define TESTING
#include"Assignment2.h"

int main(void)
{
	int r,p;
	printf("Enter the rupees and paise 1 :");
	scanf("%d%d",&r,&p);
	Money m1(r,p);

	printf("Enter the rupees and paise 2 :");
	scanf("%d%d",&r,&p);
	Money m2(r,p);

	Money m = m1 + m2;
	printf("Total rupees :");
	m.print();
	Money d = m1 - m2;
	printf("Total rupees :");
	d.print();
}







