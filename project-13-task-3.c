
#include <bits/stdc++.h> 
using namespace std; 
   
int sumOfSeries(int n) 
{ 
    int sum = 0; 
    for (int i = 1; i <= n; i++) 
        sum = sum + (2 * i - 1) * (2 * i - 1); 
    return sum; 
} 
  
int main() 
{ 
    int n = 10; 
  
    cout << sumOfSeries(n); 
  
    return 0; 
}
