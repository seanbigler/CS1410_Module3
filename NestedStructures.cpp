// File: NestedStructures
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
struct Distance // English Distance
{
    int feet;
    double inches;
};
struct Room
{
    Distance length;
    Distance width;
};

// Prototypes


// Main Program Program
int main()
{
    Room dining;
    double area;
    dining.length.feet = 13;
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;
    // TASK: Calculate and display area
    // in square feet
    // 1) convert length and width
    area = (dining.length.feet + (dining.length.inches/12)) * (dining.width.feet + (dining.width.inches/12));
    cout << "Area is " << area << " square feet" << endl;
    // 2) Find the area and display it



    return 0;
}

// Function Definitions