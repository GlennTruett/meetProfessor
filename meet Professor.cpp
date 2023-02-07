//Glenn Truett
//This program will meet the requirements for the Assignment: Random Numbers, Arrays, and Sound in C++ Part 1

// These next sever lines of code call up libraries that will be needed for the rest of the code
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
#include <stdio.h>
using namespace std;


int sound();

int main()
{
	char again = 'n';

	do {
		srand(static_cast<unsigned int>(time(NULL))); //seed random number generator
		int randomNumber = rand(); //generate random number
		int pnum = (randomNumber % 10) + 1; //get a number between 1 and 10
		int choice;
		string fName;
		

		cout << "Your random number is: " << pnum << endl;
		Sleep(2000);
		cout << "What is your first name? \n"; // prints out the question What is your name?
		cin >> fName; // receives the input from the user and assigns it to the variable names fName.
		Sleep(2000);
		cout << "\nWelcome to UAT " << fName << "!!!" << endl; // Prints message to Welcome
		cout << "\n" << fName << " you will be meeting with one of 10 UAT Professors. \n" << endl;
		system("pause\n");
		cout << "The names of the professors are: \n" << endl;

		string Professor[10] = { "Craig Belanger", "Dr. David Brokaw","Dr. Brendly Clark Singleton","Rawad Habib","Matthew Marquit","Jake Perrine","Heather Peters","Dr. Daniel Pike","Matthew Prater","Dr. Mark Smith" };

		for (int i = 0; i < 10; i++) {
			cout << i+1 << " " << Professor[i] << ", \n";
		}
			system("pause\n");
			cout << "\nIf you will notice there are numbers in front of each professor's name. Please enter a number\n from 1 through 10 to guess who you will be meeting.\n";
			cin >> choice;
			//choice--;

			if (choice-- == pnum) {
				cout << "You guessed correctly\n" << "\nThe professor you will be meeting is " << Professor[pnum] << endl;
				sound();
				exit(0);

			}
			else {
				cout << "\nSorry you guessed incorrectly\n";
				cout << "\nWould you like to try again?\n Please enter y or n \n";
				cin >> again;
				if (again == 'n') {
					cout << "\nHave a Nice Day! " << fName << endl;


				}
			}

		
		

	} while (again == 'y');

	return 0;
}

		int sound() {
		Sleep(1000);
		cout << "\nYour professor is late and you hear a sound.\n" << endl;
		Sleep(1000);
		Beep(500, 1000);
		Sleep(2000);
		cout << "This sound means that class is done for the day and you can go home.\n" << endl;
		Sleep(1000);
		cout << "HAVE A NICE DAY!"<< endl; 
		Sleep(2000);
	
		return 0;
	}

	
