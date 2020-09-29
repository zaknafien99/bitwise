// Bitwise.cpp : This file contains the 'main' function. Program execution begins and ends there.
// {L} printBinary
// Demonstration of bit manipulation

#include "printBinary.h"
#include <iostream>

using namespace std;

// A macro to save typing
#define PR(STR, EXPR) \
cout << STR; printBinary(EXPR); cout << endl;

int main()
{
    unsigned int getval;
    unsigned char a, b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    a = getval;
    PR("a in binary", a);
    cout << "Enter a number between 0 and 255: ";
    cin >> getval;
    b = getval;
    PR("b in binary", b);
    PR("a | b = ", a | b);  
    PR("a & b = ", a & b);   
    PR("a ^ b = ", a ^ b);   
    PR("~a = ", ~a);   
    PR("~b = ", ~b);   
    // An interesting bit pattern:   
    unsigned char c = 0x5A;    
    PR("c in binary: ", c);   
    a |= c;   
    PR("a |= c; a = ", a);   
    b &= c;   
    PR("b &= c; b = ", b);   
    b ^= a;   
    PR("b ^= a; b = ", b); 
} ///:~ 



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
