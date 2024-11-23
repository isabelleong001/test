//#include "colors.h" // If you want to make your map look pretty and use colors :)
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include"colors.h"
//#include<conio.h>
using namespace std;


//preprocesor

void date();
void thing (){
    cout << "whatever" << endl;
}


void game_map()
{
vector<string> room1;
vector<string> room2;
vector<string> room3;
vector<string> room4;
vector<string> room5;
room1 = {

"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n",
"|                                        |\n",
"|         #                              |\n", // # is at (11,5)
"|                        2024            |\n", // 2024 is at (26-29,6)
"|                                  !     |\n", // ! is at (36,7)
"------------------------------------------\n",
};
room2 =
{
"------------------------------------------\n",
"|                       -                |\n",
"|                                        |\n", // - is at (24 , 2)
"|          le                            |\n",
"|        painting                        |\n",
"|                          O             |\n", //0 is at (28 ,6)
"|                                  !     |\n", // ! is at (36, 7)
"------------------------------------------\n"
};
room3 =
{
"------------------------------------------\n",
"|                .                       |\n", // . is at (17,1)
"|                                        |\n",
"|                         ■              |\n", // ■ is at (26,3)
"|         @                              |\n", // @ is at (10,4)
"|         |*                             |\n", // | is at (10,5) and * is at (11,5)
"|                                  !     |\n", // ! is at (35,6)
"------------------------------------------\n",
};
room4 =
{
"------------------------------------------\n",
"|                                        |\n",
"|     ~                                  |\n", // ~ is at (6,2)
"|                              =         |\n", // = is at (31,3)
"|                   ☐                    |\n", // ☐ is at (20,4)
"|                                        |\n",
"|                                  !     |\n", // ! is at (35,6)
"------------------------------------------\n",
};
room5 =
{
"------------------------------------------\n",
"|        *                            *  |\n",
"|                     *       /          |\n",
"| e          |                *          |\n", // e is at (3,4)
"| x         -*-              /           |\n", // x is at (3,5)
"| i          |     *                     |\n", // i is at (3,6)
"| t                                &     |\n", // t is at (3,7)
"------------------------------------------\n",
};
for (int i = 0; i < room1.size(); i++)
{
cout << room1[i] << "";

}
//for (int i = 0; i < room2.size(); i++)
//{
//cout << room2[i] << "";
//}
//for (int i = 0; i < room3.size(); i++)
{
cout << room3[i] << "";

}
for (int i = 0; i < room4.size(); i++)
{
cout << room4[i] << "";
}
for (int i = 0; i < room5.size(); i++)
{
cout << room5[i] << "";
}

}

void game_player()
{
const char the_player = '&';
}

void player_pos()
{
game_map();
game_player();
int current_row = 7;
int current_column = 3;
}


void player_controls()
{
game_map();
game_player();
// the player is not in the map yet
//so basically, we need to put the player in the map, and have him move when they click wasd
// I think the way that you should go about doing this is to have them move over one coloumn or whatever
// just like it is done in dad bod.
set_raw_mode(true);

while(true)
{
  int c = toupper(quick_read());
if (c == 'W') {
cout << "up\n";
continue;

}
else if (c == 'A') {
cout << "left\n";
continue;
}
else if (c == 'S') {
cout << "down\n";
continue;
}
else if (c == 'D') {
cout << "right\n";
continue;
}
}




}


int main()
{
player_controls();
return 0;
system("pause");
}


void date() {

  system("clear");
  // working on alligning this
    cout << "Welcome to Terminal Escape! [press enter to cont.]";
    cin.get();
    cout << "To move, use WASD.";
    cin.get();
    cout << "The date is November 9, 2024, the day after the Engineering Renaissance assignment is due.";
    cin.get();
    cout << "You wake up in a cold dark room with no doors or windows in sight.";
    cin.get();
    cout << "Also you can suddenly fly. I can't explain that one yet.";
}

// g++ --std=c++2a main.cc
