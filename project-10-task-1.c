#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b;
	printf("enter the value of a:-\n");
	scanf("%d",&a);
	
	printf("enter the value of b:-\n");
	scanf("%d",&b);
	
	if(a>2 && b<=3)
	{
		printf("the statement is true");
	}
	else
	{
		printf("the statement is wrong!!");
	}
	return 0;
}
