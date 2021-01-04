#include <iostream>
using namespace std;
 

bool isRectangle(int a, int b, int c, int d)
{
    
    if (a == b == c == d) 
        return true;
 
    else if (a == b && c == d)
        return true;
    else if (a == d && c == b)
        return true;
    else if (a == c && d == b)
        return true;
    else
        return false;
}
 

int main()
{
    int a, b, c, d;
    a = 1, b = 2, c = 3, d = 4;
    if (isRectangle(a, b, c, d))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
