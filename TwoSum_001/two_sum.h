//
// Created by YiYi on 11/4/16.
//

#ifndef TWOSUM_001_TWO_SUM_H
#define TWOSUM_001_TWO_SUM_H
#include <iostream>
#include <vector>
using namespace std;

class two_sum {
private:
    vector<int> vect_in, vect_value, vect_index;
    int target;
public:
    void _init_vect(vector<int> vect_input); // initialize vector
    void _init_target(int target_input); // initialize target
    void find_two_sum();
    void print_two_sum();

};


#endif //TWOSUM_001_TWO_SUM_H
