#include <stdio.h>
#include <stdlib.h>



int main()
{
	int d,d1,d2,s,s1,s2,t;
	printf("enter the first car distance in km :-\n");
	scanf("%d",&d1);
	
	printf("enter the second car distance in km :-\n");
	scanf("%d",&d2);
	
	printf("enter the time:-");
	scanf("%d",&t);
	
	s= (d2-d1)/t;
	
	printf("the speed is %d= %d / %d ",s,d2-d1,t);
	
	printf("enter the speed of first car :- ");
	scanf("%d",&s1);
	
	printf("enter the speed of second car:- ");
	scanf("%d",&s2);
	s=s2-s1;
	d=s*t;
	
	printf(" the distance between two cars is %d = %d*%d",d,s,t);
	
		return 0;
}
