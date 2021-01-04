#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    
	float x, a[10];
	int deg, i;

	printf("Enter the degree of polynomial equation: ");
	scanf("%d", &deg);

	printf("Ehter the value of x for which the equation is to be evaluated: ");
	scanf("%f", &x);

	for(i=0;i<=deg;i++)
	{
		printf("Enter the coefficient of x to the power %d: ",i);
		scanf("%f",&a[i]);
}

	printf("The value of polynomial equation for the value of x = %.2f is: %.2f",x,y1);

	return 0;
}

