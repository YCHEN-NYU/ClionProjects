#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
/*
 * 题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.
 * 编程找出1000以内的所有完数。
 */
int main() {

    int N = 1000, sum;

    for (int i = 1; i < N; ++i) {
        sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i%j == 0)
                sum += j;
        }

        if(sum == i)
            cout << i << endl;
    }

    return 0;
}