#include <stdio.h>
#include <stdlib.h>


int main(){
 

    char file_name[] = { "a.txt" }; 
    long int res = findSize(file_name); 
    if (res != -1) 
        printf("Size of the file is %ld bytes \n", res); 
    
	return 0;
}
