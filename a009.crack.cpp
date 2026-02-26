#include <iostream>
using namespace std;

// 沒用

int main(int argc, char const* argv[])
{
  string source, target;
  cout << "Source:" << endl;
  cin >> source;
  cout << "Target:" << endl;
  cin >> target;

  int cou = 1;
  while (source != target) {
    for (char& c : source)
    {
      c -= cou;
    }
    cout << "Now trying: " << source << "count: " << cou << endl;
    cou += 1;
  }

  cout << cou;
  return 0;
}
