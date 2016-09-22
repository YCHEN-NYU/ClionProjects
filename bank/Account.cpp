//
// Created by YiYi on 9/20/16.
//


#include "bank.h"


void bank::createAccount() {
    cout << "User ID = " << endl;
    cin >> usrID;
    cout << "User Password" << endl;
    cin >> usrpwd;
    cout << "Initial balance " << endl;
    cin >> balance;
}


void bank::modifyAccount(){

    cout << "What do you want to modify? " << endl;
    cout << "1. User ID" << endl;
    cout << "2. User Password" << endl;
    cout << "3. Back to Main Menu" << endl;
    cout << "4. Exit" << endl;

    int menuList;
    cin >> menuList;

    switch(menuList){
        case 1:
        {
            cout << "User ID = " << endl;
            string usrID_1stTry;
            cin >> usrID_1stTry;

            cout << "Enter Again. " << endl;
            cout << "User ID = " << endl;

            string usrID_2ndTry;
            cin >> usrID_2ndTry;

            if(usrID_1stTry != usrID_2ndTry)
            {
                cout << "User ID not match! Back to main Menu." << endl;
                bank::frontPage();
            }

            else
            {
                usrID = usrID_1stTry;
                bank::frontPage();
            }
        }
            break;

        case 2:
        {
            cout << "User password = " << endl;
            string usrpwd_1stTry;
            cin >> usrpwd_1stTry;

            cout << "Enter Again. " << endl;
            cout << "User password = " << endl;

            string usrpwd_2ndTry;
            cin >> usrpwd_2ndTry;

            if(usrpwd_1stTry != usrpwd_2ndTry)
            {
                cout << "User password not match! Back to main Menu." << endl;
                bank::modifyAccount();
            }
            else
                usrID = usrpwd_1stTry;
        }
            break;

        case 3:
         {
            bank::mainMenu();
         }
            break;

        default:
            break;
    }

}


