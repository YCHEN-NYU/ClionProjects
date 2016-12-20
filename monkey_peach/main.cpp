#include <iostream>
using namespace std;
/*
 * 题目：一只猴子摘了N个桃子第一天吃了一半又多吃了一个,第二天又吃了余下的
 * 一半又多吃了一个,到第十天的时候发现还有一个.
 */
int main() {
    int peach;
    peach = 1;
    for(int i = 10; i > 1; --i){
        peach = (peach+1)*2;
    }
    cout << peach;
    return 0;
}