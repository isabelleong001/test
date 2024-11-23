#include <iostream>
#include <cmath>
#include <iomanip>
#include"colors.h"
using namespace std;
int choice;
// This is the first puzzle in room 3. It requires you to use a hex code. The answer for this puzzle is 1.
void puzzle_3_1() {
  set_raw_mode(false);
  cout << "It's a rose! What color is it?";
  cin.get();
  cout << "FF0000";
  cin.get();
  cout << "For the passcode input the color's spot in the rainbow (e.g. red = 1, violet = 7).";
  cin.get();
  set_raw_mode(true);
}

// This is the second puzzle in room 3. The number is hidden in the first letter of every line. The answer for this puzzle is 9.
void puzzle_3_2() {
  set_raw_mode(false);
  cout << "You press a button and a speaker turns on.";
  cin.get();
  cout << "The voice is distorted.";
  cin.get();
  cout << "\"No one has ever escaped from here.\"";
  cin.get();
  cout << "\"I have you trapped for life.\"";
  cin.get();
  cout << "\"Now go be a good player and look for the next puzzle.\"";
  cin.get();
  cout << "\"Except you need to figure out this one first.\"";
  cin.get();
  set_raw_mode(true);
}

// This is the third puzzle in room 3. It refers to the term "snake eyes" in dice. The answer for this puzzle is 2.
void puzzle_3_3() {
  set_raw_mode(false);
  cout << "It's a cardboard box.";
  cin.get();
  cout << "Open it?";
  cin.get();
  cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
cin >> choice;
  	if (choice == 1){
    cout << "You open the box.\n";
    cin.get();
    cout << "It's a snake! It rolls its eyes at you...";
    cin.get();
    cout << "You close the box.";
    cin.get();
    cout << "Thank you for respecting their privacy.";
    cin.get();
    }
    else if(choice == 0) {
    cout << "You decide to leave the box alone.";
    cin.get();
    cout << "But you continue to wonder about its contents...";
    cin.get();
}set_raw_mode(true);
}

bool door_3(){
  set_raw_mode(false);
int passcode_3;
cout << "Don't forget to enter the leftmost puzzle answer first.";
cin.get(); 
cout << "If you need to go back and look at the puzzles, enter 0 to cancel.";
cin.get();
cout << "Please enter the passcode: ";
while(true) {
    cin >> passcode_3;
	if (passcode_3 == 192) {
		cout << "The room goes dark for a second.\n";
		cin.get();
		// switch map from Room 3 to Room 4
cout << "Nice work.";
cin.get(); 
cout << "You're still trapped though.";
cin.get(); 
cout << "Sorry again.";
cin.get();
		return 1;
		}
	else if (passcode_3 == 0) {
    set_raw_mode(true);
		return 0;
		}
   else if (passcode_3 > 999 || passcode_3 < 100) {
		cout << "The passcode is a three digit integer.\n";
		cout << "Please try again: ";
		}
	else {
		cout << "Please try again: ";
		}
} set_raw_mode(true);
};
