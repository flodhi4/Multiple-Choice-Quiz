//Fauzan Lodhi
//November 1st 2020

//Q1 is to introduce user to the program
// display questions and store answers and name in file

#include "Q1.h"
#include <bits/stdc++.h>
using namespace std;
Q1::Q1()
{
    cout << "Welcome to the Computer Science Test!" << endl;        // welcome message for the user
    cout << "This is a multiple choice test. For each answer, please enter the appropriate lowercase letter" << endl;   // states that the user must enter lowercase letter answers only
    cout << "Ready? No cheating..." << endl;
    system("PAUSE");    // wait for the user to press any key
    system("CLS");      // clear screen so that only the questions are on the screen

    ofstream questions;     //define file system questions
    questions.open("questionnaire.txt"); // create and open txt file named questionnaire

    string name;        // define variables
    char answer1, answer2, answer3, answer4, answer5;

    cout << "Enter your name: ";
    getline(cin, name);     // get user's full name
    cout << endl;

    cout << "\nQuestion #1: When working with multiple files (at the same time), the stream variables ____ " << endl;       // display question 1 and its multiple choice options
    cout << "\na: must all be of the same type, such as all ifstream, or all ofstream. " << endl;
    cout << "b. must each be named independently, such as fin1, fin2, or fout1, fout2." << endl;
    cout << "c. must all be named the same, such as all fin and/or fout." << endl;
    cout << "d. are not needed since multiple files are present." << endl;
    cout << "Answer: ";
    cin >> answer1;

    cout << "\nQuestion #2: The required header file that allows classes of ofstream and ifstream to become available is: " << endl; // display question 2 and its multiple choice options
    cout << "\na. iostream " << endl;
    cout << "b. filestream " << endl;
    cout << "c. assert.h" << endl;
    cout << "d. fstream" << endl;
    cout << "Answer: ";
    cin >> answer2;


    cout <<"\nQuestion #3: When creating a new file, if a file of the same name already exists, the system will inform you that that file name is already in use." << endl; // display question 3 and its multiple choice options
    cout << "\na. true" << endl;
    cout << "b. false" << endl;
    cout << "Answer: ";
    cin >> answer3;

    cout << "\nQuestion #4: In the statement: fin.open(\"myfile.dat\", ios::in); the ios::in is the" << endl;   // display question 4 and its multiple choice options
    cout << "\na. stream name variable" << endl;
    cout << "b. name of the file" << endl;
    cout << "c. stream operation mode" << endl;
    cout << "d. name of the buffer" << endl;
    cout << "Answer: ";
    cin >> answer4;

    cout << "\nQuestion #5: What is the purpose of this line of code? Be specific." << endl;    // display question 5 and its multiple choice options
    cout << "fout.open(\"name.dat\", ios::app);" << endl;
    cout << "\na. open a brand new binary file" << endl;
    cout << "b. append the file" << endl;
    cout << "c. ios::app is the new file" << endl;
    cout << "d. delete the file" << endl;
    cout << "Answer: ";
    cin >> answer5;

    questions << answer1 << endl;   // store all user answers and name into file
    questions << answer2 << endl;
    questions << answer3 << endl;
    questions << answer4 << endl;
    questions << answer5 << endl;
    questions << name << endl;

    questions.close();  // close file
}


// 1 b
// 2 d
// 3 b
// 4 c
// 5 b
