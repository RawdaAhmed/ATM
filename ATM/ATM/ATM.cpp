// ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void ShowMenu();
void ShowBalance();
void Deposite();
void Withdraw();
int choice = 0;
double Balance,DBalance,WBalance = 0.0;

int main()
{
	//std::cout << "Hello World!\n";
	
	do
	{
		ShowMenu();
		switch (choice)
		{
		case 1:
		{
			system("cls");
			ShowBalance();
			break;
		}
		case 2:
		{
			system("cls");
			Deposite();
			break;
		}
		case 3:
		{
			system("cls");
			Withdraw();
			break;
		}
		default:
		{
			exit(1);
		}
		}
	} while (choice != 4);
}
//show menu
void ShowMenu()
{
	std::cout << "***********ATM***********\n";
	std::cout << "1-Check Balance\n";
	std::cout << "2-Deposite\n";
	std::cout << "3-Withdraw\n";
	std::cout << "4-Exit\n";
	std::cout << "Enter your choice :_";
	std::cin >> choice;
}
//show balance
void ShowBalance()
{
	std::cout << "Your Balance is:_" << Balance << "\n";
}
//deposit
void Deposite()
{
	std::cout << "Enter ur balance:_";
	std::cin >> DBalance;
	Balance += DBalance;
}

//withdraw
void Withdraw()
{
	std::cout << "Enter ur balance:_";
	std::cin >> WBalance;
	if (WBalance <= Balance)
		Balance -= WBalance;
	else
		std::cout << "Not Have Enough Money\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
