//
// Created by YiYi on 10/7/16.
//

#include "ttt.h"


// put an extra element at the end for use of find
void ttt::init_mat(int N) {
    dim = N;
    for (int i = 0; i < pow(dim,2); ++i) {
        mat.push_back(i+1); // matrix element from 1 to N*N
    }
    show_mat(mat);
}

void ttt::show_mat(vector<int> mat_2B_show) {

    for (auto it = mat_2B_show.begin(); it < mat_2B_show.end(); ++it) {
        cout << *it << "\t";
//        if ((distance(mat_2B_show.begin(),it+1))% dim == 0)
//            cout << endl;
    }
    cout << endl;
}

bool ttt::player_turn() {
    return (mat.size()%dim == 0);
}


void ttt::get_element() {
    cout << "\nelement = ";
    cin >> element;
}

vector<int>::iterator ttt::find_element(){
    ptr_element = find(mat.begin(), mat.end(), element);
    return ptr_element;
}

bool ttt::flag_find_element() {
    if (find_element() != mat.end())
        return true;
    else
        return false;
}


bool ttt::update_submat() {
    if (player_turn())
    {
        if(player_turn())
        {
            cout << "\nPlayer 1: ";
            sub_mat_1.push_back(*ptr_element);
            show_mat(sub_mat_1);
        }
        else
        {
            cout << "\nPlayer 2: ";
            sub_mat_2.push_back(*ptr_element);
            show_mat(sub_mat_2);
        }
        return true;
    }
    else {
        return false;
    }
}


bool ttt::update_mat() {
    if (ptr_element != mat.end())
    {
        mat.erase(ptr_element);
        cout << "mat: ";
        show_mat(mat);
        cout << endl;
        return true;
    }
    else {
        return false;
    }
}

bool ttt::check_win(){
    return true;
}