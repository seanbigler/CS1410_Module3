// File: RoomVolume
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
    // Use structure model of rooms to
    // calculate the volume of the rooms
    // Define a Distance structure for feet and inches
    // Define a Volume structure for length, width, and height
struct Distance
{
    int feet;
    double inches;
};
struct Volume
{
    Distance length;
    Distance width;
    Distance height;
};

// Prototypes


// Main Program Program
int main()
{
    // Initialize values to:
    // length = 16' 3.5"
    // width = 12' 6.25"
    // height = 8' 1.75"
    Volume v;
    // if initialized when declared:
    // Volume v = {{16,3.5}, {12,6.25}, {8,1.75}};
    double l;
    double w;
    double h;
    double vol;

    v.length.feet = 16;
    v.length.inches = 3.5;
    v.width.feet = 12;
    v.width.inches = 6.25;
    v.height.feet = 8;
    v.height.inches = 1.75;

    l = v.length.feet + (v.length.inches/12.0);
    w = v.width.feet + (v.width.inches/12.0);
    h = v.height.feet + (v.height.inches/12.0);

    vol = l * w * h;
    // Display volume
    cout << "The volume of the room is " << vol << " cubic feet" << endl;

    return 0;
}

// Function Definitions