//
// Created by YiYi on 11/8/16.
//

#include "op.h"
void swap_element(int &_1st_element, int &_2nd_element){
    int temp = _1st_element;
    _1st_element = _2nd_element;
    _2nd_element = temp;
};