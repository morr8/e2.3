/*
 • E2.3 Write a program that reads a number and displays the square, cube, and fourth power. Use the pow function only for the fourth power.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The square of " << number << " is " << number * number << endl;
    cout << "The cube of " << number << " is " << number * number * number << endl;
    cout << "The fourth power of " << number << " is " << pow(number, 4) << endl;

}
