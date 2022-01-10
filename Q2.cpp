//Fauzan Lodhi
//November 1st 2020

//Q2 is to create a file to store all the correct answers

#include "Q2.h"
#include <bits/stdc++.h>
using namespace std;
Q2::Q2()
{
    ofstream answers;   // define file system
    answers.open("answerkey.txt");     // create and open txt file answerkey

    char answerOne, answerTwo, answerThree, answerFour, answerFive; // define all variables

    answerOne = 'b';    // store correct answer for each question in variables
    answerTwo= 'd';
    answerThree='b';
    answerFour= 'c';
    answerFive = 'b';

    answers << answerOne << endl;   // store all correct answers in answerkey txt file
    answers << answerTwo << endl;
    answers << answerThree << endl;
    answers << answerFour << endl;
    answers << answerFive << endl;

    answers.close();        // close file
}
