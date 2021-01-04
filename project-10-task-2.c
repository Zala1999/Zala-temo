#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c;
	printf("enter the value of a:-");
	scanf("%d",&a);
	
	printf("enter the value of b:-");
	scanf("%d",&b);
	
	printf("enter the value of c:-");
	scanf("%d",&c);
	
	if(a<b<c)
	{
		printf("the statement is true!!");
	}
	else
	{
		printf("the statement is false!!");
	}
	return 0;
}
