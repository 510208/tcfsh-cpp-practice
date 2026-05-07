#include <iostream>
#include <vector>
using namespace std;

long long search(long long target, const std::vector<long long>& data, long long length) {
    long long left = 0, right = length - 1; // 上下界
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (data[mid] < target) {
            left = mid + 1; // 如果目標在中值以上就將下界設為中值
        } else if (data[mid] > target) {
            right = mid - 1; // 如果目標在中值以上就將上界設為中值
        } else {
            return mid + 1; // 找到目標，加一是為了將index值（從零開始）換成題目要的（從一開始）
        }
    }
    return 0; // 找無
}

int main()
{
    long long n, k; // n為已排序數列總長度，k為查詢內容總長度
    cin >> n >> k;
    std::vector<long long> data(n);
    std::vector<long long> query(k);

    for (long long i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    for (long long i = 0; i < k; i++)
    {
        cin >> query[i];
    }

    // 二分搜尋法
    for (long long i = 0; i < k; i++)
    {
        cout << search(query[i], data, n) << endl;
    }
    return 0;
}
