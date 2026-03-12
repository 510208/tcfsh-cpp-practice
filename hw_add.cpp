#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
      sum += i;
    }
    
    cout << sum;
    return 0;
}
