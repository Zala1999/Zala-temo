#include <stdio.h>
#include <stdlib.h>

int main() {
 	int a;
 	printf("enter the value of a:-\n");
 	scanf("%d",&a);
 	if((a%2) < 0)
 	{
 		printf("negative even number\n");
 	}
 		else if((a%2)== 0)
 		{
 		printf("number is zero\n");
 	}
 		else if((a%2)> 0)
 		{
 		printf("positive even number\n");
	 }

	return 0;
}
