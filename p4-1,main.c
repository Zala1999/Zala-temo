#include <stdio.h> 
/* height and width of a rectangle in inches */
int width;          
int height;         

int area;           
int perimeter;      

int main() {
	
	printf("enter the value of height\n");
	scanf("%d",&height);
	printf("enter the value of width\n");
	scanf("%d",&width);
    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}

