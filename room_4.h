#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include"colors.h"
#include"number_wordle.h"
using namespace std;
// This is a distraction. There is no answer to this puzzle.
void redherring() {
  set_raw_mode(false);
  int choice_4;
cout << "You pick up a book with an image of a computer on the cover. Flip to the first page?\n";
cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
cin >> choice_4;
if (choice_4 == 1) {
cout << "You flip to the first page. It says:";
cin.get();
cout << "\"01010010 01000101 01000100 00100000 01001000 01000101 01010010 01010010 01001001 01001110 01000111\".";
cin.get();
cout << "Flip to the second page?\n";
cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
cin >> choice_4;
  	if (choice_4 == 1){
    cout << "You flip to the second page. It says:";
    cin.get();
    cout << "68 105 100 32 121 111 117 32 114 101 97 108 108 121 32 106 117 115 116 32 102 97 108 108";
    cin.get();
    cout << "32 102 111 114 32 116 104 101 32 115 97 109 101 32 116 114 105 99 107 32 116 119 105 99 101 63”.";
    cin.get();
    cout << "There are no more pages. How disappointing.";
    cin.get();
    }
    else if(choice_4 == 0){
    cout << "You put down the book. How incurious!";
    cin.get();
}}
else if(choice_4 == 0) {
cout << "You put down the book. How incurious!";
cin.get();
} set_raw_mode(true);
}

// This is the first puzzle for room 4. It uses a Caesar cipher with a shift of -1. The answer to this puzzle is 2.
void puzzle_4_1() {
  set_raw_mode(false);
  int choice_4_2;
  cout << "You pick up a note that says \"dhfgs gtmcqdc mhmdsx sgqdd\". Flip it over for a hint?\n";
  cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
  cin >> choice_4_2;
if (choice_4_2 == 1){
cout << "All the back says is: \"Z = 25\".";
cin.get();
}
else if (choice_4_2 == 0){
cout << "You put down the note, but it will always be there waiting in case you change your mind.";
cin.get();
} set_raw_mode(true);
}

//This is the second puzzle for room 4. It is number wordle. The answer for this puzzle is 2.
void puzzle_4_2() {
  set_raw_mode(false);
  cout << "There is a keypad on the wall.";
  cin.get();
  cout << "It wants you to enter the numbers that will make this equation true:";
  cin.get();
  cout << "__ * __ + __ / __ = __";
  cin.get();
  cout << "All numbers are single digit except for the answer.";
  cin.get();
  cout << "You will recieve more clues after your first guess.";
  number_wordle();
  set_raw_mode(true);
}

//This is the third puzzle for room 4. It is in reference to 01134 as it appears upside down on a calculator. The answer to this puzzle is 9.
void puzzle_4_3() {
  set_raw_mode(false);
  cout << "There's an inscription on the wall.";
  cin.get();
  cout << "All it says is \"hEllo\".";
  cin.get();
  cout << "The odd capitalization bothers you.";
  cin.get();
  cout << "There is no more to this hint.";
  cin.get();
  set_raw_mode(true);
}

bool door_4(){
  set_raw_mode(false);
int passcode_4;
cout << "Enter the leftmost puzzle answer first.";
cin.get(); 
cout << "If you need to go back and look at the puzzles, enter 0 to cancel.";
cin.get();
cout << "Please enter the passcode: ";
while(true) {
    cin >> passcode_4;
	if (passcode_4 == 229) {
		cout << "The room goes dark for a second.\n";
		cin.get();
		// switch map from Room 3 to Room 4
cout << "But then it gets really bright...\n";
cin.get();
		return 1;
		}
	else if (passcode_4 == 0) {
		return 0;
		}
  else if (passcode_4 > 999 || passcode_4 < 100) {
		cout << "The passcode is a three digit integer.\n";
		cout << "Please try again: ";
		}
	else {
		cout << "Please try again: ";
		}
} set_raw_mode(true);
}
