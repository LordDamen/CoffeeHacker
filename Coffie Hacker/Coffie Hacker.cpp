// Coffie Hacker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// creating the Functions
int Hacked(int& Terror, int& Coffee);
int Normal(int& Terror, int& Coffee);
int Deposit(int& Amount, int& Terror);

int main()
{
	//assigning/ creating a random amounts for depsoits
	srand(static_cast<unsigned int>(0));
	// The actual deposit
	int TheDeposit = rand() % 10000 + 1;
	// getting input for a menu system
	int menu = 0;
	//setup the inital varables for the program
	int CoffeeShop = 1;
	int Terrorists = 100000;
	// Displaying the title to the user for convience
	cout << "Welcome to your Accountant Software." << endl;

	// This part of the program wouldnt go into the switch so i went to something diffent
	/*
	while (menu != 4);
	{
		cout << "------------------------------------------------" << endl;
		switch (menu)
		{
		case 1:
		{
			Normal(Terrorists, CoffeeShop);
			break;
		}
		case 2:
		{
			TheDeposit = rand() % 10000+ 1;
			Deposit(TheDeposit, Terrorists);
			break;
		}

		case 3:
		{
			Hacked(Terrorists, CoffeeShop);
			break;
		}

		case 4:
		{
			cout << "Have a Nice Day." << endl;
			system("pause");
		}
		// This is what happens if the case is not any of the above cases			default:
		{
			cout << "Please enter Valid Input." << endl;
			cin >> menu;
		}
		}
	} */
	do 
	{

		// starting the main simulation
		cout << "What would you like to do today?" << endl;
		cout << "------------------------------------------------" << endl;
		// These are the different states that the game has, options 1-3 do something specific and option 4 leaves the game
		cout << "1. Check Current Account Balances." << endl;
		cout << "2. Deposit Funds." << endl;
		cout << "3. Transfer The funds." << endl;
		cout << "4. End The Program." << endl;
		cout << "------------------------------------------------" << endl;
		cin >> menu;

		if (menu == 1)
		{
			Normal(Terrorists, CoffeeShop);
		}
		else if (menu == 2)
		{
			TheDeposit = rand() % 1000 + 1;
			Deposit(TheDeposit, Terrorists);
		}
		else if (menu == 3)
		{
			Hacked(Terrorists, CoffeeShop);
		}
		else if (menu == 4)
		{
			cout << "Have a Nice Day!" << endl;
			exit(0);
		}
		else
		{
			cout << "Please provide a valid input" << endl;;
		}
	} while (menu != 4);
	return 0;
	system("pause");
}


// This will be the switched function that will display the funds after the transfer to the new account
int Hacked(int& Terror, int& Coffee) 
{
	int temp = Terror;
	Terror = Coffee;
	Coffee = temp;
	// Text for flavor and to display to the user the ammout if "cash" in the accounts
	cout << "Starting Transfer" << endl;
	cout << ".................." << endl;
	cout << "The new balances are:" << endl;
	cout << "Terrorists: " << Terror << endl;
	cout << "Coffee Shop: " << Coffee << endl;
	cout << "------------------------------------------------" << endl;

	return (Terror, Coffee);
}

// T
int Normal(int& Terror, int& Coffee)
{
	// This is just displaying the current account balances to the user of the program
	cout << "Your current account balance is $" << Coffee<< " dollars." << endl;
	cout << "The Stolen accounts balance are $" << Terror << " dollars." << endl;
	cout << "------------------------------------------------" << endl;

	return (Terror, Coffee);
}
// function for creating a random amount of funds to deposit into the terrorists accounts
int Deposit(int& Amount, int& Terror)
{
	// adding the accounts to the current balance
	int temp = Terror + Amount;
	Terror = temp;

	cout << "The target has somehow added $" << Amount << " to the account." << endl;
	cout << "The new Balance is $" << Terror << " dollars." << endl;
	return(Amount, Terror);
}