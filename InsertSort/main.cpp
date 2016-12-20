#include <iostream>
#include <vector>
#include "op.h"
using namespace std;


/*
 * Pointers
 */

void swap(int &ptr1, int &ptr2){
    int temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main() {

    int _1stNum = 1, _2ndNum = 2;

    cout << "=====================" << endl;
    cout << "(" << _1stNum << ',';
    cout << _2ndNum << ")";

    swap_element(_1stNum, _2ndNum);

    cout << " ---> ";
    cout << "(" << _1stNum << ',';
    cout << _2ndNum << ")" << endl;
    cout << "=====================" << endl;

    return 0;
}

