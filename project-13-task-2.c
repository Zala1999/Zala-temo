
#include <bits/stdc++.h> 
#define M 1000000007 
using namespace std; 
  
long long multiplyFactors(int n) 
{ 
    long long prod = 1; 
    for (int i = 1; i * i <= n; i++)  
    { 
        if (n % i == 0)  
        { 
            
            if (n / i == i) 
                prod = (prod * i) % M; 
  
        
            else { 
                prod = (prod * i) % M; 
                prod = (prod * n / i) % M; 
            } 
        } 
    } 
    return prod; 
} 
  
int main() 
{ 
    int n = 12; 
  
    cout << multiplyFactors(n) << endl; 
  
    return 0; 
}
