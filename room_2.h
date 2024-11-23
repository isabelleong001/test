#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// This is the first puzzle of room 2. This puzzle utilizes Blackjack values (king, queen, ace 1, ace 11). The answer for this puzzle is 5.
void puzzle_2_1() {
set_raw_mode(false);
cout << "You see a lovely portrait of a king, queen, and their two sons.";
cin.get();
cout << "One son is just a baby, but the other one looks much older."; 
cin.get();
cout << "Underneath the portrait, it says that both sons are named Ace.";
cin.get();
set_raw_mode(true);
  }
// This is the second puzzle of room 2. The correct answer is the number of people in Engineering Renaissance. If the player doesn't know this
// number, they can still obtain the answer by adding their guess and the number of people missing. This answer for this puzzle is 7.
void puzzle_2_2() {
// declaration of varaibles 
int people;
int peoplemissing;
cout << "It's an oval shaped mirror.\n";
cin.get();
cout << "You stare a little too long, and the mirror whispers to you,\n"; 
cin.get();
cout << "\"How many people are in this room right now?\".\n";
while(true) {
    cin >> people;
	if (people == 0) {
	cout << "Not even gonna count yourself? Try that again.\n";
		}
	else if (people == 1) {
	cout << "Not in the game silly. Take your eyes off the screen. Look around you.\n";
		}
	else if (people == 34) {
  cout << "Excellent work! Try not to forget that number. Come see yourself again if you do.\n";
/* the break the break is within the people == 34 so that the cin
at the top forces the user to keep trying untill they get the answer */
  break;
  }
// if people is to large
  else if (people > 34) {
  cout << "Either you're very popular, or you're lying. Either way, just pick a lower number.\n";
  }
  else if (people > 1 && people < 34) {
  peoplemissing = 34 - people;
  cout << "Yikes! Looks like " << peoplemissing << " people didn't show up…\n";
  cin.get();
  cout << "When you put in the passcode, make sure you use the number of people that *should* have been there.\n";
  cin.get(); 
  cout << "See yourself later!\n";
  cin.get();
  break;
 }
  else {
	cout << "Talk to me again if you want to take this seriously.\n";
	break;
  }} set_raw_mode(true);
  } 
// This is the third puzzle of room 3. All the capitalized letters correspond to Roman Numerals. The answer for this puzzle is 4.
void puzzle_2_3() {
set_raw_mode(false);
cout << "You bunk your head on the ceiling and notice someone wrote on it.";
cin.get();
cout << "\"I aM DeCLan.\" Hmm… Declan, you wonder if that's a Roman name.";
cin.get();
set_raw_mode(true);
  }
bool door_2(){
set_raw_mode(false);
// declaring passcode 2
int passcode_2;
cout << "Hopefully you already caught on, but there were multiple puzzles in this room.";
cin.get(); 
cout << "Each puzzle's answer needs to be reduced down to a single digit number."; 
cin.get();
cout << "When entering these digits in the passcode, you will need to enter them based on the location of the puzzle in the room.";
cin.get(); 
cout << "The leftmost puzzle will have their number entered first.";
cin.get(); 
cout << "The second leftmost puzzle will have their number entered next, and so on and so forth.";
cin.get();
cout << "Now before you ask about that one puzzle in that one odd location, that one can be entered last.";
cin.get();
cout << "If you need to go back and look at the puzzles, enter 0 to cancel.";
cin.get();
cout << "Please enter the passcode: ";
while(true) {
    cin >> passcode_2;
	if (passcode_2 == 574) {
		cout << "The room goes dark for a second.\n";
		cin.get();
		// switch map from Room 2 to Room 3
cout << "Well uh, you probably know the drill by now.";
cin.get(); 
cout << "The room looks different! Also you're still trapped.";
cin.get(); 
cout << "Sorry about that.";
cin.get();
		return 1;
		}
	else if (passcode_2 == 0) {
		return 0;
		}
	else if (passcode_2 > 999 || passcode_2 < 100) {
		cout << "The passcode is a three digit integer.\n";
		cout << "Please try again: ";
		}
	else {
		cout << "Please try again: ";
		}
} set_raw_mode(true);
return 0;
};