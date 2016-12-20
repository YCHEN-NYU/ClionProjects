/*
 * 001 Two Sum
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution.
 */

#include <iostream>
#include <vector>
#include "two_sum.h"
using namespace std;

int main() {
    //
    vector<int> vect_input = {1, 2, 3, 10, -4, 7, 9};
    int target_input = 12;
    two_sum addup;

    addup._init_vect(vect_input);
    addup._init_target(target_input);
    addup.find_two_sum();
    addup.print_two_sum();

    return 0;
}