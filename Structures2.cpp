// File: Structures2
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
    // Declare a structure Distance
    // feet and inches
struct Distance
{
    int feet;
    double inches;
};

// Prototypes


// Main Program Program
int main()
{
    Distance d1, d2;
    d1.feet = 6;
    d1.inches = 5.5;
    //Declare and initialize structs
    // Use { }, comma separated values
    Distance d3 = {11, 6.5};
    cout << "Height is: " << d1.feet << "' " << d1.inches << "\"" << endl;

    cout << "\n Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inches: ";
    cin >> d2.inches;

    // Combine values into d1 = d2 + d3
    d1.inches = d2.inches + d3.inches;
    cout << "D1 inches = " << d1.inches << endl;

    // TASK: Calculate the final d2.feet
    // take into account inches from d1 and d3
    d1.feet = 0;
    if(d1.inches >= 12.0)
    {
        d1.inches = d1.inches - 12.0; //Substract the foot
        d1.feet++;
    }
    d1.feet += d2.feet + d3.feet;
    cout << d2.feet << "\' " << d2.inches << "\" +";
    cout << d3.feet << "\' " << d3.inches << "\" =";
    cout << d1.feet << "\' " << d1.inches << "\" \n";

    return 0;
}

// Function Definitions