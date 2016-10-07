#include <iostream>

using namespace std;
// try out getline and getchar


int main() {
    char pwd[6];
    char temp_c;
    for (int i = 0; i < 6; ++i) {
        temp_c = getchar();
        pwd[i] = temp_c;
        cout << '*';

        }

    return 0;
}