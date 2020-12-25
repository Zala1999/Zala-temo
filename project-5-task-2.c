
#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    float A,B,C,D,C1,sum,AC,BC1;  
  
    printf("Enter point 1 AC\n");  
    scanf("%f%f", &A, &C);  
  
    printf("Enter point 2 BC1\n");  
    scanf("%f%f", &B, &C1);  
  
    D= sqrt( (C - A)*(C - A) + (C1 - B)*(C1 - B) );  
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", A, B, C, C1, D);  
    sum = (AC + BC1);
    scanf("%f",&sum);
    Printf("sum of AC + BC1 = %2f",sum);
    return 0;  
} 
