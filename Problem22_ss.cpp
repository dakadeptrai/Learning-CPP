#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Map dùng để đếm tần suất xuất hiện của từng giá trị
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        counts[x]++;
    }

    long long ans = 1;
    long long MOD = 1e9 + 7;

    // Áp dụng công thức nhân (c_i + 1) cho từng giá trị phân biệt
    for (auto const& [key, count] : counts) {
        ans = (ans * (count + 1)) % MOD;
    }

    // Trừ đi 1 (loại bỏ dãy con rỗng)
    ans = (ans - 1 + MOD) % MOD;

    cout << ans << "\n";

    return 0;
}