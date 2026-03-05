#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << std::setw(2) << i << " x " << j << " = " << std::setw(4) << i * j << "   ";
        }
        cout << endl;
    }
    return 0;
}
