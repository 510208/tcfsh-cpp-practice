#include <iostream>
using namespace std;

long long pow(int a, int n)
{
    if (n == 0) return 1;
    if (n == 1) return a;

    return pow(a, n - 1) * a;
}

int main(int argc, char const *argv[])
{
    int a, n;
    cin >> a >> n;
    cout << pow(a, n) << endl;
    return 0;
}
