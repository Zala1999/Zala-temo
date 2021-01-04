
#include <bits/stdc++.h> 
using namespace std; 
   
int sumOfSeries(int n) 
{ 
    int a = 0; 
    for (int i = 1; i <= n; i++) 
        a = a + (2 * i - 1) * (2 * i - 1); 
    return a; 
} 
  
int main() 
{ 
    int n = 10; 
  
    cout << sumOfSeries(n); 
  
    return 0; 
}
