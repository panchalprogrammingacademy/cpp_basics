#include <iostream>
using namespace std;

int main() {
    // Arithmetic operator: +, -, *, / and %
    // all operators can be used on numbers (integers and float-pointing)
    cout << 1 + 2 << endl;
    cout << 1.2 * 2.3 << endl;
    cout << 10.0 / 4.0 << endl;
    cout << 1 - 2 << endl;
    cout << 10 % 3 << endl;

    // Special case for '/'
    // if we divide two integers then we get back a integer
    // i.e. the part after the decimal point is beging discarded
    cout << 10 / 3 << endl;

    // Special case for '%'
    // % operator can only be used with integers
    cout << 10 % 3 << endl;
    // cout << 10.0 % 3 << endl;
    // cout << 10 % 3.0 << endl;
    // cout << 10.0 % 3.0 << endl;

    // when we perform an arithmetic operation
    // say x + y then
    // first variables are promoted(to larger type) to the same type
    // and then the expression is evaluated
    // e.g. 'a' + 1 then
    // 'a' is char with 1 byte
    // 1 is an int with 4 byte
    // int is bigger in size and hence both are promoted to int
    // 97 + 1 = 98 and hence  the output is 98
    cout << ('a' + 1) << endl;

    // 1.0 is of type double with 8 bytes
    // 2 is of type int with 4 bytes
    // since double is larger in size, we first prompote 
    // 2 from int to double 2.0
    // 1.0 + 2.0 = 3.0 and hence the result is 3.0
    cout << (1.0 + 2) << endl;


    // Relational operators - used for comparison
    // <, >, <= , >= , != and == (equality test)

    // Logical operators - used to combine results of 
    // two or more relational operations
    // &&, || and !(Logical Not)

    return 0;
}