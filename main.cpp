//Fauzan Lodhi
//November 1st 2020
// Test program

#include <iostream>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char no;
    no == 'y';

    while(no!='n')      // run loop until user enters "n"
    {
        system("color F0"); // change colour of display window to black text and light background to look realistic
        system("CLS");  // clear screen when the loop starts
        Q1();   // call on class Q1
        Q2();     // call on class Q2
        Q3();   // call on class Q3
        cout << "\nEnter 'n' to exit: ";    // prompt the user to continue or run the program again
        cin >> no;
    }

    cout << "Thank you for completing the test. Program is complete." << endl;  // thank you message

    return 0;
}
