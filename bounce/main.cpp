#include <iostream>

using namespace std;
/*
 * 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，
 * 求它在第10次落地时，共经过多少米？第10次反弹多高？
 */

// nth bounce height
double bounce(double height, int n){
    if(n == 0)
        return height;
    else
        return bounce(height/2,n-1);
}

// total travel distance on the nth hit of the ground
double total_dist(double height, int n){
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        if(i == 0)
            sum += bounce(height, i);
        else
            sum += bounce(height, i)*2;
    }
    return sum;
}



int main() {
    double height, distance, n;
    double H0 = 100;
    n = 3; // nth bounce & nth hit traveled distance
    height = bounce(H0,n);
    distance = total_dist(H0, n);
    cout << "(" << n << "th) bounce: " << height << endl;
    cout << n << "th) hit: " << distance << endl;
    return 0;
}