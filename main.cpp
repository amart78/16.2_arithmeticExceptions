/***************************************************************************************
Alexis Martinez 

16.2 ARITHMETIC EXCEPTIONS

This program prompts a user for a number and calculates its square root.
It utilizes a `sqRoot` function that calculates the square root and returns the result 
if it is a perfect square. If the result is not a perfect square, it throws an exception.
****************************************************************************************/
 
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int sqRoot(int);

int main (){

    int num, result;

    // Gets integer input from user
    cout << "Please enter a number to calculate its square root: ";
    cin >> num;

    // Displays the square root of inputted number if the result is valid
    try{
        int result = sqRoot(num);
        cout << "\nThe square root of " << num << " is: " << result << endl;
        
    } catch (string msg){
        cout << msg << endl;
    }

    return 0;
}


// sqRoot
// This function calculates the square root of the user input number
// and returns the result if it is a perfect square.
// Otherwise, it throws an exception.
int sqRoot(int num){
    if (num <= 0 || sqrt(num) != static_cast<int>(sqrt(num)) ){
        throw string("\nThis is not a perfect square.");
    }
    return sqrt(num);
}

// Perfect Squares (30 total) between 1 and 1000:  
// 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 
// 144, 169, 196, 225, 256, 289, 324, 361, 400, 441,
// 484, 529, 576, 625, 676, 729, 784, 841, 900, 961.