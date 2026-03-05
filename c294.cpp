#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;

    // 先排序三邊
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }

    // 判斷是否為三角形
    cout << a << " " << b << " " << c << endl;
    if (a + b <= c) {
        cout << "No" << endl;
        return 0;
    }
    if (a*a + b*b < c*c) {
        cout << "Obtuse" << endl;
    } else if (a*a + b*b == c*c) {
        cout << "Right" << endl;
    } else {
        cout << "Acute" << endl;
    }
    
    return 0;
}
