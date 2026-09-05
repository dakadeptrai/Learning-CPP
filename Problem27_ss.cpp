//Sum of Four Values

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Bảng băm lưu: key = tổng của một cặp, value = cặp chỉ số (gốc)
    unordered_map<long long, pair<int, int>> pair_sums;

    // Duyệt qua mảng để tìm 4 phần tử
    for (int i = 0; i < n; i++) {
        // Bước 1: Tìm cặp trùng khớp đã xuất hiện trước chỉ số i
        for (int j = i + 1; j < n; j++) {
            long long target = x - (a[i] + a[j]);
            if (pair_sums.count(target)) {
                auto p = pair_sums[target];
                cout << p.first << " " << p.second << " " << (i + 1) << " " << (j + 1) << "\n";
                return 0;
            }
        }

        // Bước 2: Thêm các cặp được tạo bởi phần tử i và các phần tử đứng trước nó vào map
        // Việc này đảm bảo các vòng lặp sau kiểm tra sẽ không bị trùng chỉ số
        for (int k = 0; k < i; k++) {
            pair_sums[a[k] + a[i]] = {k + 1, i + 1};
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}