#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    sort(data.begin(), data.end());
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    int max_nok = -1;
    for (int i = 0; i < n; i++) {
        if (data[i] > max_nok && data[i] < 60) {
            max_nok = data[i];
        }
    }
    if (max_nok == -1) {
        cout << "best case" << endl;
    } else {
        cout << max_nok << endl;
    }

    int min_ok = 101;
    for (int i = 0; i < n; i++) {
        if (data[i] < min_ok && data[i] >= 60) {
            min_ok = data[i];
        }
    }
    if (min_ok == 101) {
        cout << "worst case" << endl;
    } else {
        cout << min_ok << endl;
    }
}
