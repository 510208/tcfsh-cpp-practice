#include <iostream>
using namespace std;

// a009位移量為1

int main(int argc, char const* argv[])
{
  string source;

  cin >> source;

  for (char& c : source)
  {
    c -= 7;
  }

  cout << source;

  return 0;
}
