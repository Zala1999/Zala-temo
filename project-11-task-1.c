#include <stdio.h>



int main() {
	int a,b;
	printf("enter the value of a:-\n");
	scanf("%d",&a);
	
	printf("enter the value of b:-\n");
	scanf("%d",&b);
	
	if(a != b || b != a)
	{
		printf("the larger values of variables are =%d\n");
	if(a && b == 0)
	    printf("the variable's values are zero\n");
	}
	else
	{
		printf("new variable's values % and %d ");
	}
	return 0;
}
