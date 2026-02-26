#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
  int a, b, c;

  cin >> a >> b >> c;

  int delta;
  // 判別
  delta = b * b - 4 * a * c;

  if (delta < 0) {
    cout << "No real root" << endl;
  } else if (delta > 0) {
    double x1, x2;

    // 公式解
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
  } else {
    double x;

    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Two same roots x=" << x;
  }

  return 0;
}
