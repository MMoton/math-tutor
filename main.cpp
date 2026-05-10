/*
Code File Name: Chapter5MathTutor.cpp
Programmer: Maya Moton
Due Date: 04/15/2026

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand((unsigned)time(0));

    // Generate two random numbers
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    // Display the problem
    cout << "Solve the problem:\n\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;

    
    cout << "\nPress Enter to see the answer...";
    cin.ignore();  // wait for Enter

    // Display the answer
    cout << "\n  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cout << "  " << (num1 + num2) << endl;

    return 0;
}

