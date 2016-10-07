//
// Created by YiYi on 10/7/16.
//

#include "ttt.h"


// put an extra element at the end for use of find
void ttt::init_mat(int N) {
    dim = N;
    for (int i = 0; i < pow(dim,2)+1; ++i) {
        mat.push_back(i*2);
    }
}

void ttt::show_mat() {

    for (auto it = mat.begin(); it < mat.end()-1; ++it) {
        cout << *it << "\t";
        if ((distance(mat.begin(),it+1))% dim == 0)
            cout << endl;
    }
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

bool ttt::update_mat() {
    if (ptr_element != mat.end())
    {
        mat.erase(ptr_element);
        return true;
    }
    else {
        return false;
    }
}
