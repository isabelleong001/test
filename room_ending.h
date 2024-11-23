#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include"colors.h"
using namespace std;

// This is a dialogue that will play once you enter the final room.
void cutscene_1() {
  set_raw_mode(false);
  cout << "It's a different room.";
  cin.get();
  cout << "You know this because it's the first time you've encountered a window here.";
  cin.get();
  cout << "Outside the window you see stars.";
  cin.get();
  cout << "Lots of them.";
  cin.get();
  cout << "Ohhh so that's why you could fly, you were in microgravity!";
  cin.get();
  cout << "Who's that on the other side of the room?";
  cin.get();
  cout << "Oh my god. It's him... the mastermind... Voss!";
  cin.get();
  cout << "RUN!";
  cin.get();
  set_raw_mode(true);
}


// This is the final input the player will give. Their choice does not matter.
void door_exit() {
  int choice_exit;
  set_raw_mode(false);
  cout << "It's the exit. It leads straight out into space.";
  cin.get();
  cout << "It's unlocked.";
  cin.get();
  cout << "You don't have a spacesuit.";
  cin.get();
  cout << "Open the hatch?";
  cin.get();
  cout << "Please enter 1 for yes or 0 for no. You will not be able to make this decision again.\n";
  cin >> choice_exit;
if (choice_exit == 1){}
else {
  cout << "...";
  cin.get();
  cout << "Did you honestly think your choices have mattered up until now?";
  cin.get();
} 
}

// This is the final dialogue of the entire game.
void cutscene_ending() {
  cout << "Despite your best judgement, you go to open the exit.";
  cin.get();
  cout << "Why hasn't Voss tried to stop you?";
  cin.get();
  cout << "Wait a minute! That's not Voss. That's Dad Bod Voss!";
  cin.get();
  cout << "He cracks open a cold beer. Now that's thinking like a Dad Bod.";
  cin.get();
  cout << "You leave the exit closed.";
  cin.get();
  cout << "Now how to get home...";
  cin.get();
}
