
// File: functionsStruct
// Created by Sean Bigler on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU

//

#include <iostream>

using namespace std;
// TASK: Create a function that displays the
// x and y coordinates of a point
// Constants & Structures
struct Point
{
    float x;    // x value
    float y;    // y value
};

// Prototypes
void DisplayPoint(struct Point p);    // The prototype MUST be defined AFTER the structs

// Main Program Program
int main()
{
    Point first = {2, 8};
    DisplayPoint(first);
    return 0;
}

// Function Definitions
void DisplayPoint(struct Point p)
{
    cout << "x = " << p.x << endl;
    cout << "y = " << p.y << endl;
}