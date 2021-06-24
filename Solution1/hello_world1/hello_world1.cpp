// hello_world1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>             // header       <>: c++ defined       "": user defined
using namespace std;

void main()             // functionName: verb + noun      // entrance              returnType functionName(inputParameter)
{
    short num = 3;             
    int num2;                 

    /*
    print hello world
    */
    cout << "Hello World!\n";              // comment: ctrl + k, ctrl + c       uncomment: ctrl + k, ctrl + u
    cout << "hi! " << "My name is " << "Wang" << " " << "Yi" << "\n"; // `\n` eascape sequence  转义符   `\t` `\"` `\'` `\\`

    /*
    input and output
    */
    cout << "Please enter a number: ";            
    cin >> num2;                    // stores value into a variable
    
    cout << "The input number is " << num2;
    
    /*
    data type auto casting
    */
    cout << 1 + 2 << '\n';              // 1 -> int,  3.14 -> double                // int + int = int
    cout << 3.14 + 3.2 << '\n';         // double + double = double
    cout << 1 + 3.14 << '\n';           // int + double = double            // C++ 无法直接进行不同数据类型的数据的运算
                                                                            // C++ 会自动进行数据类型转换 int ->double
                                                                            // 1.0 + 3.14 = 4.14

    cout << 10 / 3 << '\n';                     // int / int = int: discard
    cout << 10.0 / 3;
    cout << 10 % 3;                     // mod
    
    /*
    1. Ask the user to enter its fname, lname
    2. Print a welcome message to the user: Welcome Yi Wang
    3. Ask the user to enter its birth year      1954
    4. Calculate the century of the user's birth year   1954 -> 19 -> 20
    5. Calculate the decade of the user's birth year    1954 -> 54 -> 5 -> 50
    6. Print the result: You were born in the 50 decade of 20 century
    */
    string fname;
    string lname;
    int birthYear;
    int century;
    int decade;

    cout << "Please enter you name: ";
    cin >> fname >> lname;
    cout << "Please enter your birthyear: ";
    cin >> birthYear;

    century = birthYear / 100 + 1;
    decade = birthYear % 100 / 10;
    
    cout << "You were born in " << decade << "0 decade" << "in " << century << "century";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file