#include <iostream>
#include <vector>
using namespace std;
/*
 * Grab a bunch of string and count characters
 */
int main() {
    vector<char> bunchoftext;
    char temp_char;
    do {
        temp_char = getchar();
        bunchoftext.push_back(temp_char);
    }while(temp_char != '\n');
    bunchoftext.pop_back();// get rid of \newline symbol

    int count_alphabet = 0, count_spaces = 0, count_symbols = 0;


    for (auto it = bunchoftext.begin(); it < bunchoftext.end(); ++it) {
        if((*it >= 'A' && *it <= 'Z' )|| (*it >= 'a' && *it <= 'z' ))
            count_alphabet++;
        else
            if(*it == ' ')
                count_spaces++;
            else
                count_symbols++;
        cout << *it;
    }
    cout << endl;

    cout << "Total size = " << bunchoftext.size() << endl;
    cout << "Alphabet = " << count_alphabet << endl;
    cout << "Spaces = " << count_spaces << endl;
    cout << "Symbols = " << count_symbols << endl;

    return 0;
}