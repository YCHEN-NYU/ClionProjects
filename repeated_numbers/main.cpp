#include <iostream>
#include <cmath>
using namespace std;
/*
 * 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如
 */
int f(int a, int i){
    if(i == 1)
        return a;
    else
        return f(a,i-1)+a*pow(10, i-1);
}
int main() {
    int a, N;
    cout << "a = ";
    cin >> a;
    cout << "N = ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += f(a,i);
    }
    cout << "sum = " << sum << endl;
    return 0;
}