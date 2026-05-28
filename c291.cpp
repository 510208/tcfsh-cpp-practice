#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 優化
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, start = 0, count = 0;
    cin >> n;
    vector<int> friend_id(n), status(n, 0);  // 0表還未掃描
    for (int i = 0; i < n; i++) {
        cin >> friend_id[i];
    }

    while (start < n) {
        count++;

        int first_person = start;
        // cout << "[ ] 從此開始掃描: " << start << " -> " << first_person << endl;
        status[first_person] = -1;

        int now_person = friend_id[first_person];
        // cout << "    掃瞄到: " << first_person << " -> " << now_person << endl;

        while (now_person != first_person) {
            // cout << "    掃瞄到: " << now_person << " -> " << friend_id[now_person] << endl;
            status[now_person] = -1;
            now_person = friend_id[now_person];
        }
        // cout << "    結束" << endl;

        while (start < n && status[start] == -1) {
            start++;
        }
    }

    // cout << "[ ] " << count;
    cout << count << endl;

    return 0;
}
