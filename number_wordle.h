/*



we will copy and paste into main once we need to call this and make a function 
from there


*/
#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void number_wordle() {
    //creating the vector for the answer
    vector<int> answer(5);  // = {4, 2, 9, 3 ,11}; old answer format
    // new answer forma
    answer.at(0) = 4;
    answer.at(1) = 2;
    answer.at(2) = 9;
    answer.at(3) = 3;
    answer.at(4) = 11;
    
    //getting size of vector to use in for loops
    //so we can chnage amount of numbers answe has later
    long int size;
    size = answer.size();
    
    //allowig user to input a guess
    vector<int> users_guess(size);
    
    //temp varaible to push numbers into a vector
    int temp;
    cout << "Enter each number one at a time." << endl;
    for (int i = 0;  i < size; i++) {
        cout << "Blank " << i+1 << " : ";
        cin >> temp;
        users_guess.at(i) = temp;
        
    }
    // varaible to check how many values match
    int correct_answers = 0;
    vector<string> result;
    string result_temp;

    //while loop getting user to keep trying till there correct

    while (correct_answers != size) {
    for (int i = 0; i < size; i++) {
        if (answer.at(i) == users_guess.at(i)) {
            // adding 1 to correct answer to see if it matches size at end of loop
            correct_answers++;
            result_temp = 'c';
            result.push_back(result_temp);
        }
        else {
            // if answer exist just in wrong place
            auto it = find(answer.begin(), answer.end(), users_guess.at(i));
            if (it != answer.end()) {
                result_temp = 'w';
                result.push_back(result_temp);
            }
            else // answer isnt found
                result_temp = 'x';
                result.push_back(result_temp);
        }
    }
        cout << "Your guesses: ";
        for (int i = 0; i < size; i++)  {
            cout << users_guess.at(i) << " ";
        }
        cout << "\nc = number is in correct blank\nw = number is in wrong blank\nX = the number is not in the equation\n";
        cout << "Your result is: ";
        for (string i : result)
        {
            cout << i << " ";
            }
        if (correct_answers != size) {
            //clearing vector
            for(int i = 0; i < size; i++) {
                users_guess.at(i) = 0;
            }
            // allow user to retry
            cout << "Try again." << endl;
            for (int i = 0;  i < size; i++) {
                cout << "Blank " << i+1 << " : ";
                cin >> temp;
                users_guess.at(i) = temp;
            }
            //reset amount user got correct back to 0
            correct_answers = 0;
            result.clear();

        }
    }
    cout << "\nCongrats! You may use your answer in the passcode." << endl;
}