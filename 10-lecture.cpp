// Bitwise operators
#include <iostream>
using namespace std;

int main() {
  // Bitwise operators: &, |, ^, !, >>, <<, >>>
  // &, | are not short-circuited
  int x1 = 0b1101;
  int x2 = 0b1011;

  int x3 = (x1 & x2);  // 0b1001 = 9
  int x4 = (x1 | x2);  // 0b1111 = 15
  int x5 = (x1 ^ x2);  // 0b0110 = 6
  int x6 = x1 >> 2;    // 0b0011 = 3
  cout << "x3= " << x3 << ", x4= " << x4 << ", x5= " << x5 << endl;
  cout << "x6= " << x6 << endl;
  return 0;
}