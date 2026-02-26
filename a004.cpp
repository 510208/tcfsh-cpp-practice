#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
  // 西元年被4整除且不被100整除，或被400整除者即為閏年
  int a;

  while (cin >> a) {
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
      cout << "閏年";
    }
    else {
      cout << "平年";
    }
  }

  return 0;
}
