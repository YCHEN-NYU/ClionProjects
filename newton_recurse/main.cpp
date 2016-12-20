#include <iostream>
#include <cmath>
using namespace std;
/*
 * 用牛顿迭代法 求方程 2*x*x*x-4*x*x+3*x-6= 0  的根
 */

double f(double x){
    return 2*pow(x,3) - 4*pow(x,2)+3*x-6;
}
int main() {

    return 0;
}