// Suffixes
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 10 is by default of type int
    int x = 10;
    // 1.23 is by default of type double
    float y = 1.23;
    // if we want a floating point literal to be float
    // then we have to append F at the end!


    // [0, 18446744073709551615]
    cout << "Range of unsigned long long int is [0, " << ULLONG_MAX << "]" << endl;
    // whenever you write a integer literal it is by default treated as type int
    unsigned long long int a = 1844674407370955161;
    unsigned long long int b = 18446744073709551615ULL;
    cout << "a= " << a << endl;

    return 0;
}