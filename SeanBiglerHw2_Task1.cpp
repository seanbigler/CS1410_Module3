// File: SeanBiglerHw2_Task1
// Created by Sean Bigler on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU

/*
 * =====================================================================================
 *
 *       Filename:  housePrice.cpp
 *       	Usage:  ./housePrice.cpp
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *       Compiler:  g++
 *         Author:  Dr. Hugo Valle (), hugovalle1@weber.edu
 *   Organization:
 * =====================================================================================
 */
#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */

    return 0;
}

/* Function Defenitions */
struct house InputHouse(void)
{
    house h;
    cout << "Enter the street number:" << endl;
    cin >> h.streetNum;
    cout << "Enter the street name:" << endl;
    cin >> h.streetName;
    cout << "Enter the price:" << endl;
    cin >> h.price;

    return h;

}

void PrintHouse(int houseNum, struct house h)
{
    cout << "House " << houseNum << ": at " << h.streetNum << " " << h.streetName << " for $" << h.price << endl;
}

int ComparePrices(struct house h1, struct house h2)
{
    int x = 0;

    if(h1.price < h2.price)
    {
        x = 1;
    }
    else if(h1.price == h2.price)
    {
        x = 2;
    }
    else if(h1.price > h2.price)
    {
        x = 3;
    }
    else
    {
        x = 4;
    }

    return x;
}