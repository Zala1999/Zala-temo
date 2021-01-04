#include <stdio.h>
#include <stdlib.h>


int main() {

    int A1,B1,A2,B2,X,Y,C1,C2;
	
	printf("enter the value of A1:-\n");
	scanf("%d",&A1);
	
	printf("enter the value of X:-\n");
	scanf("%d",&X);
	
	printf("enter the value of B1:-\n");
	scanf("%d",&B1);
	
	printf(" enter the value of A2:-\n");
	scanf("%d",&A2);
	
	printf("enter the value of Y:-\n");
	scanf("%d",&Y);
	
	printf("enter the value of B2:-\n");
	scanf("%d",&B2);
	
	C1=A1*X + B1;
	C2=A2*Y + B2;
	
	printf("the result is =%d",C1);
	printf("the result is =%d",C2);
	
	return 0;
}
