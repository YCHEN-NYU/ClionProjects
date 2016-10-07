#ifndef BANK_H
#define BANK_H

#include <iostream>
using namespace std;

class bank{
private:
    string usrID;
    string usrpwd;
    int balance;
public:
    // 1. Bank Account Management
    void frontPage();
    void manageAccount();

    void createAccount();
    void modifyAccount();
    void closeAccount();





    // 2. ATM Service
    // login with useID and pwd
    void login();
    void welcomeMsg();
    void mainMenu();
    void navigate();
    void showBalance();
    void withdraw();
    void deposit();
    void exit();

    //

};
#endif
