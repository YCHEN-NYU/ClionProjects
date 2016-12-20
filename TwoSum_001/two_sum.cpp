//
// Created by YiYi on 11/4/16.
//

#include "two_sum.h"


void two_sum::_init_vect(vector<int> vect_input) {
    vect_in = vect_input;
}

void two_sum::_init_target(int target_input){
    target = target_input;
}

void two_sum::find_two_sum() {
    for (auto it_outer = vect_in.begin(); it_outer < vect_in.end(); ++it_outer)
    {
        for (auto it_inner = it_outer+1; it_inner < vect_in.end(); ++it_inner)
        {
            if(*it_outer + *it_inner == target)
            {
                vect_value.push_back(*it_outer);
                vect_index.push_back(distance(vect_in.begin(),it_outer));
                vect_value.push_back(*it_inner);
                vect_index.push_back(distance(vect_in.begin(),it_inner));
                break;
            }

        }
    }
}

void two_sum::print_two_sum() {
    if(vect_value.size() != 0)
    { if(vect_value[1] >= 0)
        cout << target << " = " \
             << vect_value[0] << '(' << vect_index[0] << ')'  \
             << '+' \
             << vect_value[1] << '(' << vect_index[1] << ')';
        else
            cout << target << " = " \
             << vect_value[0] << '(' << vect_index[0] << ')'  \
             << vect_value[1] << '(' << vect_index[1] << ')';
    }
    else
        cout << "No target found!" << endl;
}