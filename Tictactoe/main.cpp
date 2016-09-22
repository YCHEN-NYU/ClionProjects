/*
 * Tic Tac Toe game (3x3 matrix)
 *
 *
 */
#include <iostream>
#include <vector>
using namespace std;


void printmat(vector<int> mat){
    for(int i = 0; i < 9; i++){
       cout << mat[i] << endl;
    }
}
int main(){
    vector<int> mat;
//    , submat;
//    mat = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    initmat(mat);

    for(int i = 0; i < 9; i++){
//        cout << mat[i] << endl;
        mat.push_back(i+1);
    }
    printmat(mat);
//    cout << "Hello!" << endl;

    return 0;
}