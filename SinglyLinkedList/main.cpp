#include <iostream>
//#include <string>
using namespace std;
/*
 * Singly Linked List
 */

struct fruit{
    int number;
    float price;
    string color;
};

int main() {
    fruit apple;
    cout << "number = ";
    cin >> apple.number;
    cout << "price ($/each) = ";
    cin >> apple.price;
    cout << "color = ";
    cin >> apple.color;

    float totalPrice = apple.number*apple.price;
    cout << "Total Price = " << totalPrice << endl;

    return 0;
}