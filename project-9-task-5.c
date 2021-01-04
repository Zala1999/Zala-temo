#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void find_century(int year)
{
    
    if (year <= 0)
        cout << "0 and negative is not allow"
             << "for a year";
    else if (year <= 100)
        cout << "1st century\n";
 
    else if (year % 100 == 0)
        cout << year/ 100 <<" century";
    else
        cout << year/ 100 + 1 << " century";        
}
 

int main()
{
    int year = 2001;
    find_century(year);
    return 0;
}
