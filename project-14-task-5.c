#include<stdio.h>
#include<conio.h>

int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}
int main()
{
	int a,b;
	printf("enter the value of a:-\n");
	scanf("%d",&a);
	printf("enter the value of b:-\n");
	scanf("%d",&b);
	gcd(int a,int b);
}
