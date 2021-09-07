#include <iostream>
using namespace std;

int main() {

    // if is used to run a piece of code
    // when certain condition is met
    // if(condition) {  }

    // since the condition is true 
    // so associated block will run
    if (10 > 5) { 
        cout << "Hello World!\n";
        cout << "Welcome to C++!\n";
    }

    // associated code block will not run
    if (10 < 5) { 
        cout << "Hello World!\n";
        cout << "Welcome to C++!\n";
    }

    // when we are to use only one statement
    // inside an if-block then we can skip curly braces
    if (10 > 5) cout << "Hello World!\n";



    // we can also have an else block
    // where we can specify a piece of code
    // that should run when the condition is not met
    // if (condition) { 
    //      // statement(s) to be executed when condition is true
    // } else {
    //      // statement(s) to be executed when condition is false
    // }
    // in this case if part will run
    if (10 > 5) {
        cout << "This is if-block!\n";
    } else {
        cout << "This is else-block!\n";
    }

    // in this case else part will run
    if (10 < 5) cout << "This is if-block!\n";
    else        cout << "This is else-block!\n";

    return 0;
}