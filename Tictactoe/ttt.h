//
// Created by YiYi on 10/7/16.
//

#ifndef TICTACTOE_TTT_H
#define TICTACTOE_TTT_H


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class ttt{
private:
    vector<int> mat;
    vector<int> sub_mat_1, sub_mat_2;
    int dim; // matrix.size() = dim*dim
    int element;
    vector<int>::iterator ptr_element;
public:
    void init_mat(int dim_N);
    void show_mat(vector<int> mat_2B_show);
    bool player_turn(); // odd --> Player1, even --> 2
    void get_element();
    vector<int>::iterator find_element();
    bool flag_find_element();
    void update_submat();
    void update_mat();
    bool check_win();
    };

#endif //TICTACTOE_TTT_H
