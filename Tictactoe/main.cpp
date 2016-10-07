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
    for (int i = 0; i < N; ) {
        game.show_mat();

        if(game.player_turn())
            cout << "\nPlayer 1\n";
        else
            cout << "\nPlayer 2\n";
//
        game.get_element();
        game.find_element();
//
        while(game.update_mat() != true)
        {
            game.get_element();
            game.find_element();
        }
            ++i;

    }


    return 0;
}