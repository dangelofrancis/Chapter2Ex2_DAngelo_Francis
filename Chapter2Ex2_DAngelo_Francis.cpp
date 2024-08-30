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
    cout << "Please enter a number!\n";
    cin >> number1;
    cout << "Please enter a second number!\n";
    cin >> number2;
    answer = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is " << answer << "!";

    return 0; //this is to return the value defined by the function
}

