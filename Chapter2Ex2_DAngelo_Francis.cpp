/*
TITLE: Chapter 2 Exercise 2 - Do something
FILE NAME: Chapter2Ex2_DAngelo_Francis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 08/2024
REQUIREMENTS: 
*/

#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    int answer;
    cout << "This is a test..." << endl;
    cout << "Please enter a number!" << endl;
    cin >> number1;
    cout << "Please enter a second number!" << endl;
    cin >> number2;
    answer = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is " << answer << "!";

    return 0; //this is to return the value defined by the function
}

