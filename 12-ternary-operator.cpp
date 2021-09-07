// ternary operator 
// var x = (condition) ? exp1 : exp2
// x = exp1; if condition is true
/// x = exp2; if condition is false
#include <iostream>
using namespace std;

int main() {
    int x = 1, y;
    int bill = 569, discount;

    // using if-else
    if (x == 1) y = 0;
    else        y = 1;
    // using ternary operator
    y = (x == 1 ? 0 : 1);


    // if bill is greater than 500 then discount is 20%
    // otherwise discount is 10%
    if (bill > 500) discount = 20;
    else            discount = 10;
    // using ternary operator
    discount = (bill > 500 ? 20 : 10);

    // using if-else
    if (x == 1) cout << "true" << endl;
    else        cout << "false" << endl;
    // using ternary operator
    cout << (x == 1 ? "true" : "false") << endl;


    return 0;
}