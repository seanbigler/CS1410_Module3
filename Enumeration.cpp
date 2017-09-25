// File: Enumeration
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
    // Specify enum type
    // Values are in index notation
    //            0    1    2    3    4     5    6
enum daysOfWeek {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

// Prototypes


// Main Program Program
int main()
{

    // Define variables of type enum daysOfWeek
    daysOfWeek day1, day2;
    // Give values
    day1 = Mon;
    day2 = Thur;
    cout << "Value of day1 is " << day1 << endl;
    int diff = day2 - day1; // do integer arithmetic
    cout << "Days between = " << diff << endl;

    //Comparison
    if(day1 < day2)
    {
        cout << "day 1 comes before day2" << endl;
    }

    return 0;
}
// Function Definitions