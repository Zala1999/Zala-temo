

#include <stdio.h>
#define MAX_SIZE_ARRAY 10

void sortarray(int a[]);
void swap(int *a, int *b);

void sequence_swap(int * a);

int main(void)
{
	int a[MAX_SIZE_ARRAY], index;

	printf("Enter array elements\n");
	for(index = 0;  index < MAX_SIZE_ARRAY; ++index)
		scanf("%d",&a[index]);

	printf("Entered array elements is:\n\n");
	for(index = 0;  index < MAX_SIZE_ARRAY; ++index)
		printf("%d ",a[index]);

	printf("\n");

	sortarray(a);

	printf("sorted array is:\n");
	for(index = 0; index< MAX_SIZE_ARRAY; ++index)
	 printf("%d ", a[index]);
	
	printf("\n");

	sequence_swap(a);

	printf("a<b>c<d>e etc sequence is:\n");
	for(index = 0; index< MAX_SIZE_ARRAY; ++index)
	 printf("%d ", a[index]);

return 0;
}

void sortarray(int *a)
{
 int i , j, n;
 n = MAX_SIZE_ARRAY;
 for(i = 0; i < n; ++i)
	 for (j = n - 1; j > i; --j)
		 if(a[j-1] > a[j])
			 swap(&a[j],&a[j-1]); 
}

void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

void sequence_swap(int *a)
{
	int i;
	int temp;
	for (i =1; i < MAX_SIZE_ARRAY-1 ; i +=2 )
	{
	temp = a[i];
	a[i] = a[i+1];
	a[i+1] = temp;
	
