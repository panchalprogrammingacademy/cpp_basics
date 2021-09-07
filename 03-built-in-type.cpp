#include <iostream>
using namespace std;

int main() {
    // data type := data-type defines the set of possible values and
    // set of operations that can be performed on that value!

    // set of operations := we can divide two numbers but not two strings!
    // divide operation is applicable to numbers and not to strings!

    // set of values := 
    // for boolean can only take true/false
    // int can only take integers
    // double can only take real numbers not strings!

    // how many built-in types are there in c++?
    // int, char, float, double, void
    // int => for integers
    // char => for characters
    // float => floating point values
    // double => double floating point values (more presicion)
    // 1.23, double will represent it more accurately than float!
    // void => for non-returning functions!

    // literals => constants in program!
    // in C++ we can represent integer literals (or integer constants)
    // in four different ways i.e. decimal(0-9), binary(0-1), octal(0-7), hex(0-9,A-F) 
    int x1 = 10; // decimal - no prefix
    int x2 = 0310; // octal - starting with zero, reverse 10 => 01 => 0.8^0 + 1.8^1 + 3.8^2 + ...
    int x3 = 0b110; // binary - starting with 0b, reverse 110 => 011 => 0.2^0 + 1.2^1 + 1.2^2 + ... 
    int x4 = 0x1A0; // hexadecimal - starting with 0x or 0X, reverse 1A0 => 0A1 => 0.16^0 + A.16^1 + 1.16^2

    // what is the output of the following?
    cout << "x1= " << x1 << endl;
    cout << "x2= " << x2 << endl;
    cout << "x3= " << x3 << endl;
    cout << "x4= " << x4 << endl;

    // double floating point numbers can be represented in two ways
    // i.e. decimal-point-notation and scientific notation
    double y1 = 1.23;
    double y2 = 123E-2; // 123x10^-2 = 123*0.01 = 1.23
    double y3 = 1e9; // 1x10^9
    double y4 = 1.2E2; // 1.2x10^2 = 1.2*100 = 120

    cout << "y1= " << y1 << endl;
    cout << "y2= " << y2 << endl;
    cout << "y3= " << y3 << endl;
    cout << "y4= " << y4 << endl;

    // by default if you write an integer in C++
    // it is treated as type `int` 
    // by default if you write a real number in C++
    // it is treated as type `double`
    cout << "sizeof(float) = " << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    // by default float point literal is treated as double!
    cout << "sizeof(1.23) = " << sizeof(1.23) << endl;
    // 1.23 is represented as (double)(1.229999999999999982) in memory
    // to make a floating point literal of  type float
    // we have to append a F at the end of the literal!
    // 1.23F is represented as (float)(1.230000019F) in memory!
    cout << "sizeof(1.23F) = " << sizeof(1.23F) << endl;

    // character are constants enclosed within single quotes!
    char ch1 = 'a';
    char ch2 = '$';
    char ch3 = '+';
    cout << "ch1= " << ch1 << endl;
    cout << "ch2= " << ch2 << endl;
    cout << "ch3= " << ch3 << endl;

    // when we add or subtract two characters
    // they are first prompted to integers!
    // based on ASCII(American Standard Code Of Information Interchange) value
    char ch = 'z' - 'A'; 
    cout << "ch= " << ch << endl;

    return 0;
}