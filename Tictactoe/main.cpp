/*
 * Tic Tac Toe game (N x N)
 *
 *
 */
#include <iostream>
#include <vector>
#include "ttt.h"
using namespace std;


int main(){

    ttt game;

    int N;
    cout << "N = ";
    cin >> N;
    cout << endl;

    game.init_mat(N);// n x n matrix

    for (int i = 0; i < N*N; ) {

        do {
            game.get_element();
            game.find_element();

        }while(!game.flag_find_element());

        game.update_submat();
        game.update_mat();

        ++i;
    }


    return 0;
}