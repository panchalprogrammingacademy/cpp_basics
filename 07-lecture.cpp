// Integer overflow/undeflow
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // [-2147483648, 2147483647]
    cout << "Range of int is [" << INT_MIN << ", " << INT_MAX << "]" << endl;
    int x = INT_MAX + 1;
    cout << "x= " << x << endl;

    // number system is cyclic
    // you represent all number on a number line
    // and move on that number line
    // when x = 2147483647 and we add 1 to it
    // we rotate across the cycle!

    // overflow - value more than the max. value
    cout << INT_MAX + 2 << endl;
    // undeflow - value smaller than the min. value
    cout << INT_MIN - 1 << endl;
 
    return 0;
}