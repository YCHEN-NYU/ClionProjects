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
    }
    cout << endl;
}

bool ttt::player_turn() {
    if(dim % 2 == 0)
        return (mat.size() % 2 == 0);
    else
        return (mat.size() % 2 != 0);
}


void ttt::get_element() {
    if(player_turn()){
        cout << "\nPlayer 1 <-- ";
        cin >> element;
    }
    else
    {
        cout << "\nPlayer 2 <-- ";
        cin >> element;
    }


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


void ttt::update_submat() {

    if(player_turn())
        sub_mat_1.push_back(*ptr_element);
    else
        sub_mat_2.push_back(*ptr_element);

    sort(sub_mat_1.begin(), sub_mat_1.end());
    sort(sub_mat_2.begin(), sub_mat_2.end());

    cout << "\nPlayer 1: ";
    show_mat(sub_mat_1);
    cout << "\nPlayer 2: ";
    show_mat(sub_mat_2);
}

void ttt::update_mat() {
    if (ptr_element != mat.end())
    {
        mat.erase(ptr_element);
        cout << "mat: ";
        show_mat(mat);
        cout << endl;
    }
}


bool ttt::check_win(){
    vector<int> mat_to_check = sub_mat_1;
    // check player1, player2
    // 1. size of them
    // 2. sub-matrix with 3 elements
    // 3.
    //  d= [1] | 1-2-3 | 4-5-6 | 7-8-9|
    //     [2] | 2-5-8 | 3-5-7 |
    //     [3] | 1-4-7 | 3-6-9 |
    //     [4] | 1-5-9 |
    bool win_flag = false;
    int d1, d2;
    vector<int> temp_submat;
    for (int i = 0; i < 2; ++i) {

        if(i == 0)
            mat_to_check = sub_mat_1;
        else
            mat_to_check = sub_mat_2;

        while(mat_to_check.size() >= 3)
        {


            // ***************
            // get sub_mat with 3-elements
        for (auto it_outer = mat_to_check.begin(); it_outer < mat_to_check.end(); ++it_outer) {
            for (auto it_inner = it_outer; it_inner < mat_to_check.end(); ++it_inner){
                for(auto it_core = it_inner; it_core < mat_to_check.end(); ++it_core) {
                    temp_submat.push_back(*it_core);
                }
            }

            d1 = temp_submat[2]-temp_submat[1];
            d2 = temp_submat[1]-temp_submat[0];

            if(d1 == d2){
                if((d1 == 1)
                   && ((temp_submat[0] == 1) || (temp_submat[0] == 4)
                       || (temp_submat[0] == 7)))
                {
                    win_flag = true;
                    if(i == 0)
                        cout << "Player 1 Win!\n";
                    else
                        cout << "Player 2 Win!\n";
                    break;
                }

                else
                if((d1 == 2)
                   && ((temp_submat[0] == 2) || (temp_submat[0] == 3) ))
                {
                    win_flag = true;
                    if(i == 0)
                        cout << "Player 1 Win!\n";
                    else
                        cout << "Player 2 Win!\n";
                    break;
                }

                else
                if((d1 == 3)
                   && ((temp_submat[0] == 1) || (temp_submat[0] == 3) ))
                {
                    win_flag = true;
                    if(i == 0)
                        cout << "Player 1 Win!\n";
                    else
                        cout << "Player 2 Win!\n";
                    break;
                }

                else
                if((d1 == 4)
                   && (temp_submat[0] == 1))
                {
                    win_flag = true;
                    if(i == 0)
                        cout << "Player 1 Win!\n";
                    else
                        cout << "Player 2 Win!\n";
                    break;
                }
            }

        }
    }

    }

    return win_flag;
}
