#include <iostream>
#include <cmath>
using namespace std;
#define epsilon 1.0e-8
int main() {
    double a = 2, x0, x1;
    x0 = a/2;
    x1 = (x0+a/x0)/2;

    while(abs(x1-x0) > epsilon){
        x0 = x1;
        x1 = (x0 + a/x0)/2;
    }

    cout << x1 << endl;
    return 0;
}