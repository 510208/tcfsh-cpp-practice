#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string x;
    cin >> x;
    
    const int len = x.length();
    int odd_sum = 0, even_sum = 0;

    for (long long i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            odd_sum += x[i] - '0';
        } else {
            even_sum += x[i] - '0';
        }
    }

    cout << abs(odd_sum - even_sum);

    return 0;
}
