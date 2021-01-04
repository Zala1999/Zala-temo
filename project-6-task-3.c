#include<stdio.h>
void main()
{

     int a,b,c;

     printf(" Enter values of a, b and c \n");
     scanf("%d %d %d",&a,&b,&c);

     printf("\n a = %d",a);

     printf("\n b = %d",b);

     printf("\n c = %d",c);
     c=a+b+c;

     b=c-b-a;

     c=c-b-a;

     a=c-b-a;

    printf("\n After swapping their values are as below -");

     printf("\n a = %d",a);
     printf("\n b = %d",b);
     printf("\n c = %d",c);

     getch();
}
