#include <iostream>
// why do we write this?
using namespace std;

// main - every C++ need to have a main function
// the program execution begins from main function
int main() {

    // cout => used to write to stdout (standard output device) console-ouput
    // cin => used to read from stdin (standard input device) console-input
    // cerr => used to write to stderr (standard error device) 
    // cout, cin, cerr are objects under std namespace

    // here std namespace is used to define the scope
    // and :: is called the scope resolution operator
    // std::cout << "Hello World!\n";
    // std::cout << "Welcome to C++" << std::endl;

    cout << "Hello World!\n";
    cout << "Welcome to C++" << endl;
   

    return 0;
}