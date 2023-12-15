// BankAccount.cpp : This file allows users to enter a password, username, and an amount of money.
// First of all, the program will ask the user for an initial deposit of money into the account
// Second of all, after that deposit is done, the user will be prompted with 3 other things
// 1. Access money in account
// 2. Change username and password
// 3. Exit the entire program
// program will also automatically exit when there are too many incorrect attempts on the username and password

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string bankUsername, bankPassword;
    string inputUsername, inputPassword;
    int choice, moneyChoice;
    double balance, deposit, withdraw, initialDeposit;
    balance = 0.0;
    deposit = 0.0;
    withdraw = 0.0;
    bool loopEnd = true;
    bool loginGood = true;
    bool attemptsLoop = true;

    cout << "Set up your bank account" << endl;
    cout << endl;
    cout << "Enter a new username: ";
    cin >> bankUsername;
    cout << endl;
    cout << "Enter a new password: ";
    cin >> bankPassword;
    cout << endl;

    cout << "Bank account created successfully!\n";
    cout << endl;


        // User tries to log in
        cout << "Bank Account Login" << endl;
        cout << endl;
        cout << "Enter username: ";
        cin >> inputUsername;
        cout << endl;
        cout << "Enter password: ";
        cin >> inputPassword;
        cout << endl;

        do
        {
            if (inputUsername == bankUsername && inputPassword == bankPassword) //checking if the username and password are correct
            {
               while(loginGood)
                {
                    cout << "Your login was successful! Welcome to your new bank account!" << endl;
                    cout << endl;
                    cout << "Please make an initial deposit: ";
                    cin >> initialDeposit;
                    cout << "You have $" << initialDeposit << " in your account";
                    cout << endl;
                    loginGood = false;
                }

               cout << endl;
                cout << "What would you like to do now?" << endl;
                cout << "1. Access the money in the account" << endl;
                cout << "2. Change username and password" << endl;
                cout << "3. Exit the session" << endl;
                cout << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                cout << endl;

                switch (choice)
                {
                    case 1:
                    {
                        cout << "Press 1 to add more money into your account" << endl;
                        cout << "Press 2 to remove money from your account" << endl;
                        cout << "Enter your choice: ";
                        cin >> moneyChoice;
                        cout << endl;
                        switch (moneyChoice)
                        {
                            case 1:
                            {
                                cout << "Enter the amount of money you want to add into your account: ";
                                cin >> deposit;
                                initialDeposit += deposit;
                                cout << "The amount of money in your account is now: $" << initialDeposit << "." << endl;
                                break;
                            }

                            case 2:
                            {
                                    cout << "Enter the amount of money you want to take out of your account: ";
                                    cin >> withdraw;
                                    initialDeposit -= withdraw;
                                    if (initialDeposit -= withdraw < 0)
                                    {
                                        cout << "This amount is impossible. Try a different amount." << endl;
                                        break;
                                    }

                                    else
                                    {
                                        cout << "The amount of money in your account is now: $" << initialDeposit << "." << endl;
                                        break;
                                    }

                            }

                            default:
                            {
                                cout << "Please enter either 1 or 2." << endl;
                                break;
                            }
                        }
                        break;
                    }

                    case 2:
                    {
                        cout << "Enter a new username: ";
                        cin >> bankUsername;
                        cout << "Enter a new password: ";
                        cin >> bankPassword;
                        cout << "Credentials changed successfully!\n";
                        cout << "Bank Account Login" << endl;
                        cout << endl;
                        cout << "Enter username: ";
                        cin >> inputUsername;
                        cout << endl;
                        cout << "Enter password: ";
                        cin >> inputPassword;
                        cout << endl;
                        break;

                    }

                    case 3:
                    {
                        cout << "Thank you for using my program. Come back soon!" << endl;
                        loopEnd = false;
                        break;
                    }

                    default:
                    {
                        cout << "Please enter an option that is between 1 - 3 next time." << endl;
                        cout << endl;
                        break;
                    }
                }

            }

            else
            {
                cout << "The username or password you just entered is wrong. Please remember your login information next time." << endl;
                loopEnd = false;
            }

        } while (loopEnd);

    return 0;
}

