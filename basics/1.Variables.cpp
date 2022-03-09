#include<iostream>
using namespace std;

int main(){
    // use anything
    // 2 types of memories
    // stack memory (1-2MB), heap memory (256MB)
    
    
    // Intergers: int(), 
    // int (4 bytes) (1 byte = 8 bits) (32bits) ()
    // 1000 0000 .... 00 (31 bits remaning -> -2^31 + 1, 2^31) (2^32 for unsigned, always)
    // long (8 bytes) (64 bits, 63 usable -> 2^63, -2^63 + 1)
    // Different types are : int, long, long long
    // unsigned int, unsigned long, unsinged long long
    // short int (2 bytes)
    
    // Singed integers 
    int a = 9; // ( 4 bytes) // A simple Integer definition
    // int - data type, a - identifier,
    // Identifier can only contain - a-z or A-Z, _, 0-9.
    int A_prashik_123123132;

    long b; // (8 bytes) 981982739734
    long long c; // (16 bytes)

    // unsigned intergers (only positive integers)
    unsigned int d; // (4)
    unsigned long e; // (8)
    unsigned long long f; // (16)
    
    // short signed integers (2 bytes)
    short int g; // (2 bytes)

    int myVariable = 11;
    int MyVariable = 15;
    // Cout and cout are different.
    // assign a value to variable and print it
    cout << myVariable << endl;
    cout << MyVariable << endl;

    
    int vaishnavi = 10;
    cout << vaishnavi << endl;
    
    
    // Defining multiple variables at the same time.
    int prashik=10, raut=-2;
    int sum = prashik + raut;
    // We add these two variables
    cout << "Value of sum is: " << sum << endl;
    cout << prashik + raut << endl;


    

    return 0;
}