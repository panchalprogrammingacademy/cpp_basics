// data-type modifiers: signed, unsigned, long, short
#include <iostream>
#include <climits>
using namespace std;


int main() {
    // data type modifiers are used to modify the existing types
    // we can use these modifiers to extend or shirnk the range!
    // the exact values depends on the machine!
    // [-2147483648, 2147483647]
    cout << "Range of int is [" << INT_MIN << ", " << INT_MAX << "]" << endl;

    // we also know that C++ supports only five primitive types
    // int, char, float, double and void!
    // now what if we want to work with values that are outside of this range?
    // what if we need a bigger number than 2147483647?
    // what if I represent 2147483648?
    // This goes out of the range of int
    // and hence this number cannot be represneted using an int
    // we can extend range using long and shirnk using short
    cout << "Range of short int is [" << SHRT_MIN << ", " << SHRT_MAX << "]" << endl;
    cout << "Range of long int is [" << LONG_MIN << ", " << LONG_MAX << "]" << endl;
    cout << "Range of long long int is [" << LLONG_MIN << ", " << LLONG_MAX << "]" << endl;

    // double is actually long float!
    // range of long long int is [-9223372036854775808, 9223372036854775807]
    // now what if I want a bigger value than 9223372036854775807?
    // what if I want to store 9223372036854775808?

    // signed can take both values and by default types are signed
    // we can switch to unsigned to discard negative values
    // and take more positive value for that space
    cout << "Range of unsigned int is [0, " << UINT32_MAX << "]" << endl;

    cout << "Range of char is [" << CHAR_MIN << ", " << CHAR_MAX << "]" << endl;
    cout << "Range of unsigned char is [0, " << UCHAR_MAX << "]" << endl;

    // by default all types are signed
    signed int x1 = 10;
    int x2 = 10;

    // for unsigned we have to specify explictly!
    unsigned int x3 = 10;

    // max. range we can reach
    unsigned long long int x;



    return 0; 
}