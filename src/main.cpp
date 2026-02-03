#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Add two integers.
 * @param a Left operand.
 * @param b Right operand.
 * @return Sum of a and b.
 */
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }
int subtract(int a, int b) { return a - b; }
int divide(int a, int b) { return a / b; }
int main() {
  cout << "Hello from user1! 22 + 4 = " << add(22, 4) << '\n';
  cout << "Hello from user1! 22 * 4 = " << multiply(22, 4) << '\n';
  cout << "Hello from user1! 4 - 2 = " << subtract(4, 2) << '\n';
  cout << "Hello from user1! 20 / 5 = " << divide(20, 5) << '\n';
  return 0;
}
