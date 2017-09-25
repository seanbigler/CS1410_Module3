// File: Structures1
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
    // Make structure definitions global
    // so all programs can see them
struct part
{
    int modelNum;   // ID of widget
    int partNum;    // ID of widget part
    double cost;    // Cost of part
};
struct school
{
    int majors;
    int minors;
    unsigned int numStudents;
    double tuition;
};

// Prototypes


// Main Program Program
int main()
{
    // Create/define a member of "struct part" variable
    struct part part1;
    part part2;
    school weber;
    // Use dot operator to access members of your struct
    part1.modelNum = 25;
    part1.partNum = 375;
    part1.cost = 217.55;

    cout << "For part1:" << endl;
    cout << "Model is: " << part1.modelNum << endl;
    cout << "Part is: " << part1.partNum << endl;
    cout << "Cost is: " << part1.cost << endl;


    part2.modelNum = 123;
    part2.partNum = 195;
    part2.cost = 917.15;

    cout << "For part2:" << endl;
    cout << "Model is: " << part2.modelNum << endl;
    cout << "Part is: " << part2.partNum << endl;
    cout << "Cost is: " << part2.cost << endl;


    weber.tuition = 3512.99;
    weber.numStudents = 22567;

    cout << "Weber tuition is $" << weber.tuition << endl;

    return 0;
}
// Function Definitions