
  
#include <stdio.h> 
void printDigit(int N) 
{ 
    int r; 
  
    if (N == 0) { 
        return; 
    } 
  
    r = N % 10;
    printDigit(N / 10); 
   
    printf("%d ", r); 
} 

int main() 
{ 
    int N ; 
  
    printDigit(N); 
    return 0; 
}
