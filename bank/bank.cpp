//
// Created by YiYi on 9/20/16.
//

#include "bank.h"

void bank::welcomeMsg(){
    cout << "Welcome to your bank, " << usrID << "!" << endl;
}

void bank::mainMenu(){
    cout << "1. Balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Exit" << endl;
    cout << "Navigate by selecting: 1 - 4: " << endl;

    int menuChoice;
    cin >> menuChoice;

    switch(menuChoice){
        case 1:
            bank::showBalance();
            break;
        case 2:
            bank::withdraw();
            break;
        case 3:
            bank::deposit();
            break;
        case 4:
            bank::exit();
            break;
        default:
            cout << "Error! " << endl;
    }
}

void bank::navigate(){
    cout << "Press 0: back to main menu" << endl;
    cout << "Press 1: exit" << endl;

    int usrInput;
    cin >> usrInput;

    switch(usrInput){
        case 0:
            bank::mainMenu();
            break;
        case 1:
            bank::exit();
            break;
        default:
            break;
    }

}


void bank::showBalance(){
    // show balance in the account
    cout << "Current balance =  " << balance << "$" << endl;
    bank::navigate();
}


void bank::withdraw(){
    cout << "Current balance =  " << balance << "$" << endl;

    cout << "Enter the amount to be withdrawn: " << endl;
    float withdrawAmount;
    cin >> withdrawAmount;
    balance -= withdrawAmount;
    cout << "Successful withdraw!" << endl;

    cout << "Current balance =  " << balance << "$" << endl;
    bank::navigate();
}

void bank::deposit() {
    cout << "Current balance =  " << balance << "$" << endl;
    cout << "Enter the amount to be deposited: " << endl;
    float depositAmount;
    cin >> depositAmount;
    balance += depositAmount;
    cout << "Successful deposit!" << endl;
    cout << "Current balance =  " << balance << "$" << endl;

    bank::navigate();
}


void bank::exit(){
    for (int i = 0; i < 10; i++ )
        cout << endl;
    cout << "Thank you for using your bank!" << endl;
}

