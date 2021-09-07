// Logical operators
#include <iostream>
using namespace std;

int main() {

    int x = 10;
    bool y = (x > 10 && ++x);
    cout << "x= " << x << ", y= " << y << endl;

    // Logical Operators are short-circuited
    // exp1 && exp2 then exp2 will not be evaluated if exp1 is false
    // exp1 || exp2 then exp2 will not be evaluated if exp1 is true
    // since x > 10 i.e. 10 > 10 is fale
    // and we are using logical AND
    // the expression ++x is never evaluated
    return 0;
}