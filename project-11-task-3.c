#include <iostream>
using namespace std;
#define pdd pair<double, double>
 

void lineFromPoints(pdd a, pdd b)
{
    double p= b.second - a.second;
    double q = a.first - b.first;
    double r = p * (a.first) + q * (a.second);
 
    if (q < 0) {
        cout << "The line passing through points a and b "
                "is: "
             << p << "a - " << q << "b = " << r << endl;
    }
    else {
        cout << "The line passing through points a and b "
                "is: "
             << p << "a + " << q << "b = " << r << endl;
    }
}
 

int main()
{
    pdd a = make_pair(3, 2);
    pdd b = make_pair(2, 6);
    lineFromPoints(a, b);
    return 0;
}
