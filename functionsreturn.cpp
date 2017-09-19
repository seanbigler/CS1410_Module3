// File: functionsreturn
// Created by Sean Bigler on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
//TASK: Define a function that takes one
//input parameter (integer), it increments the value
//by one, and returns the new value to the user
#include <iostream>

using namespace std;
// Constants


// Prototypes
int Increment(int x); // requires integer
void ReallyIncrement(int &i);   // requires address of integer

// Main Program Program
int main(void)
{
    int num = 0;
    int num2 = 0;
    cout << "Number is " << num << endl;
    num2 = Increment(num);
    cout << "Number 2 is " << num2 << endl;
    num = Increment(num);
    cout << "num is " << num << endl;
    cout << "Address of num: " << &num << endl;
    ReallyIncrement(num);
    cout << "num is " << num << endl;

    return 0;
}

// Function Definitions
// Passing parameters by value
int Increment(int x)
{
    cout << "Address of x inside IncrementInt" << &x << endl;
    x =+ 1;  // Equivalent to x++
    return x;
}

// Increment original int by 1
// passing parameter by Reference (address)
void ReallyIncrement(int &i)
{
    cout << "Address of i inside ReallyIncrementInt " << &i << endl;
    i++;
    return;
}