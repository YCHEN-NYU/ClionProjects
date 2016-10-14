//
// Created by YiYi on 10/13/16.
//

#include "get_submat.h"

void get_subvec(vector<int> input_vec){
    int N = 3;
        vector<int> temp_vec;
    for (int i = 0; i < 9; ++i) {
        for (int j = i+1; j < 9; ++j) {
            for (int k = j+1; k < 9; ++k) {
                temp_vec.push_back(input_vec[i]);
                temp_vec.push_back(input_vec[j]);
                temp_vec.push_back(input_vec[k]);
            }

        }
    }
    for (auto it = temp_vec.begin(); it < temp_vec.end(); ++it) {
        cout << *it << "\t";
        if((distance(it, temp_vec.begin())+1)%3 == 0)
            cout << endl;
    }
};
