/*-------------------Dry Run-------------------
  x^n = 3^5;
  binform = n, ans=1, x = 3
  ans = ans*[x] = 3
  x = x*x = 9
  x= x*x = 81
  ans = ans*x = 243
  x=x*x=81^2
 */

#include <iostream>
using namespace std;

double powToN(double base, long n) {
  if (base == 0) {
    return 0;
  }
  double ans = 1;
  if (n < 0) {
    base = 1 / base;
    n = -n;
  }
  while (n > 0) {
    if (n % 2 == 1) {
      ans = ans * base;
    }
    base = base * base;
    n /= 2;
  }
  return ans;
}
int main() {
  int base;
  int exponent;
  cout << "This Program Calculates the exponentiation with the help of binary "
          "numbers\n";
  cout << "Enter the base : ";
  cin >> base;
  cout << "Enter the power : ";
  cin >> exponent;
  cout << base << " to the power " << exponent
       << " is : " << powToN(base, exponent) << "\n ";
  cout << "<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
