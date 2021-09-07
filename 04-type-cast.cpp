#include <iostream>
using namespace std;

int main() {
    // type-casting: change the type
    // implicit => performed by C++
    // explicit => performed by programmer

    // type-mismatch => integer is assigned to character
    // C++ will automatically/implicitly converts the integer
    // to character based on ASCII value!
    char ch = 65;
    cout << "ch= " << ch << endl;

    // type-mistmatch => by default floating point literal is of type double
    // and here we are assigning double to a float
    // again implicit type cast!
    float value1 = 1.23;
    cout << "value1= " << value1 << endl;

    // type-mismatch => assigning double to a int
    // assigning larger data type to a smaller data type
    // may lead to loss of value
    int value2 = 1.23;
    cout << "value2= " << value2 << endl;

    // character can take value in range [0, 127]
    // total 128 characters in ASCII table!
    char ch1 = 1028;
    int v1 = ch1;
    char ch2 = v1;
    cout << "ch1= " << ch1 << ", v1= " << v1 << ", ch2= " << ch2 << endl;


    // explicit type cast
    // we forcefully or explicitly tells the compiler
    // to perform a type cast
    // here we have casted 1.23 explicitly to int
    int x = (int)1.23;
    // In C++ if we divide two integers then we get back a integer!
    // i.e. the part after the decimal point is truncated!
    cout << "1/2 = " << 1/2 << endl;
    // for decimal part to appear, at least one of them has to be double
    cout << "1.0/2.0 = " << 1.0/2.0 << endl;
    cout << "1.0/2 = " << 1.0 / 2 << endl;
    cout << "1/2.0 = " << 1 / 2.0 << endl; 

    // now for integer variables we cannot add .0  at the end
    // and if we wish to get the floating point value
    // then we have to cast at least one of them to double
    // here we will use explicit type cast!
    int a1 = 10, a2 = 20;
    cout << "a1/a2 = " << (a1/a2) << endl;
    cout << "(double)a1/a2 = " << ((double)a1/a2) << endl;
    cout << "a1/(double)a2 = " << (a1/(double)a2) << endl;
    cout << "(double)a1/(double)a2 = " << ((double)a1/(double)a2) << endl;


    return 0;
}