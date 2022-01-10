//Fauzan Lodhi
//November 1st 2020

//Q3 is to open both files and read to compare student answers with answer key
// Q3 will state which questions were answered correctly
// Q3 will display student score out of 5

#include "Q3.h"
#include <bits/stdc++.h>
using namespace std;
Q3::Q3()
{
    system("PAUSE");    // wait for user to continue
    system("CLS");  // clear screen
    char answer1, answer2, answer3, answer4, answer5;       // declare variables
    char answerOne, answerTwo, answerThree, answerFour, answerFive;
    string name;
    int score=0;

    ifstream inquestions;   // open and read questionnaire txt file
    inquestions.open("questionnaire.txt");

    inquestions >> answer1; // bring all txt from file to current file
    inquestions >> answer2;
    inquestions >> answer3;
    inquestions >> answer4;
    inquestions >> answer5;
    inquestions >> name;



    ifstream inanswers;     // open and read answerkey txt file
    inanswers.open("answerkey.txt");

    inanswers >> answerOne;     // bring all the txt file to current file
    inanswers >> answerTwo;
    inanswers >> answerThree;
    inanswers >> answerFour;
    inanswers >> answerFive;

    cout << name << endl;    // display student name
    cout <<"\n";


    //--------------------------Read through each answer and compare to answerkey. Add +1 to score for each correct answer
    // cannot be else if because these conditions can happen in any combination
    if (answer1==answerOne)
    {
        cout << "Question 1 is correct" << endl;
        score=score+1;
    }

    if (answer2==answerTwo)
    {
        cout << "Question 2 is correct" << endl;
        score=score+1;
    }

    if (answer3==answerThree)
    {
        cout << "Question 3 is correct " << endl;
        score=score+1;
    }

    if (answer4==answerFour)
    {
        cout << "Question 4 is correct" << endl;
        score=score+1;
    }

    if (answer5==answerFive)
    {
        cout << "Question 5 is correct" << endl;
        score=score+1;
    }

    //---------------------------------------------------

    if (answer1==answerOne && answer2==answerTwo && answer3==answerThree && answer4==answerFour && answer5==answerFive) // if all five answers are correct
    {
        cout << "All questions are correct!" << endl;
        score = 5;
    }

    cout << "Your score is " << score << " out of 5" << endl;   // display score for user

    inquestions.close();        // close both files
    inquestions.close();

}
