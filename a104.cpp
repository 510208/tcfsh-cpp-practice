#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  while (cin >> n)
  {
    int data[n];

    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    sort(data, data + n);

    for (int i = 0; i < n; i++)
    {
        cout << data[i];
        if (i != (n - 1))
        {
          cout << " ";
        }
    }

    cout << endl;
  }

  return 0;
}
