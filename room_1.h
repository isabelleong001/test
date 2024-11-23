/*
This program is puzzel room 1
for engr game 

we will convert this into a function probably later on

do people even read my comments??
beisdes you robert requiring them
*/

// preprocessors
#include <iostream>
#include <cmath>
#include <iomanip>
#include"colors.h"
using namespace std;
// There is only one puzzle in room one. The player needs to input the date (November 22,2024) as a reduced number to escape to room 2.

void tutorial() {
	// this will cout the basics of how to play the game 
	cout << "This RPG will use reducing numbers, so let's get familiar with it.";
	cin.get();
	cout << "In order to reduce a number, add the sum of its digits.";
	cin.get();
	cout << "If your answer still has more than one digit, then repeat this process until you're left with a single digit."; 
	cin.get();
	cout << "Let's look at an example, your number is 407:";
	cin.get();
	cout << "4+0+7=11, 1+1=2, so 407 becomes 2.";
	cin.get();
	cout << "Alright, now it's your turn.";
	cin.get();
	cout << "Make your way over to the ! and put in today's date. Good luck!";
	cin.get();
	cout << "P.S. There's no rush, feel free to check out the room first.";
	cin.get();
}
		
bool door_1 (){
	// door 1, here we will go where basically just do stuff ya 
	// it pretty much checks if answer is 5 or not and tells users if its # is to large 
    cout << "If you need to go back and look at the puzzles, enter 0 to cancel.\n";
int passcode_1;
cout << "Please enter the passcode:\n";
while(true) {
	set_raw_mode(false);
	cin >> passcode_1;
	if (passcode_1 > 9) {
		cout << "The passcode is a one digit integer.\n";
		cout << "Please try again.\n";
		}
	else if (passcode_1 == 5) {
		cout << "The room goes dark for a second.\n";
		cin.get();
		// switch map from Room 1 to Room 2
        cout << "When the light returns, you find that the decorations in the room have changed, or perhaps you're in a different room with identical architecture.";
		cin.get();
		cout << "Either way, it doesn't matter. You're still trapped.\n";
		cin.get();
		return 1;
		}
	else if (passcode_1 == 0) {
		break;
		}
	else {
		cout << "Please try again.\n";
		}
} set_raw_mode(true);
return 0;
}    

void calendar() {
	set_raw_mode(false);
	cout << "It's a calendar.\n";
	cout << "The date is November 22, 2024.";
	cin.get();
	set_raw_mode(true);
}

void retutorial() {
	set_raw_mode(false);
	int choice_tut;
	cout << "Do you need to see the summing digits tutorial again?\n";
	cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
	cin >> choice_tut;
	if (choice_tut == 1){
	tutorial();
}
	else if (choice_tut == 0){
	cout << "See ya later!";
	cin.get();
}
set_raw_mode(true);
}

void intro() {
  system("clear");
  // working on alligning this
    cout << "Welcome to Terminal Escape! [press enter to cont.]";
    cin.get();
    cout << "To move, use WASD.";
	cin.get();
	cout << "To interact with objects, press E.";
    cin.get();
    cout << "The date is November 22, 2024, the day that the Engineering Renaissance assignment is due.";
    cin.get();
    cout << "You wake up in a cold dark room with no doors or windows in sight.";
    cin.get();
    cout << "Also you can suddenly fly. I can't explain that one yet.\n";
}
