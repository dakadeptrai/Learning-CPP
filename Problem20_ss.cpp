//Traffic Lights
#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, n;
    cin >> x >> n;

    vector<int> p(n);
    vector<bool> has_light(x + 1, false);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        has_light[p[i]] = true; // Đánh dấu các vị trí có đèn
    }

    // L[i] lưu vị trí đèn bên trái gần nhất của i
    // R[i] lưu vị trí đèn bên phải gần nhất của i
    vector<int> L(x + 1), R(x + 1);
    
    // Khởi tạo mảng L và R tại thời điểm ĐÃ ĐẶT HẾT ĐÈN
    int last = 0;
    for (int i = 0; i <= x; i++) {
        if (has_light[i] || i == x) {
            L[i] = last;
            last = i;
        }
    }
    last = x;
    for (int i = x; i >= 0; i--) {
        if (has_light[i] || i == 0) {
            R[i] = last;
            last = i;
        }
    }

    // Tìm khoảng trống lớn nhất tại thời điểm cuối cùng
    int max_passage = 0;
    for (int i = 0; i <= x; i++) {
        if (has_light[i] || i == x) {
            max_passage = max(max_passage, i - L[i]);
        }
    }

    // Đi ngược từ cuối về đầu để tìm kết quả
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[i] = max_passage; // Lưu kết quả hiện tại

        int curr = p[i];
        int left_neighbor = L[curr];
        int right_neighbor = R[curr];

        // Rút đèn tại `curr` ra -> nối liền left_neighbor và right_neighbor
        R[left_neighbor] = right_neighbor;
        L[right_neighbor] = left_neighbor;

        // Khoảng trống mới tạo thành là (right_neighbor - left_neighbor)
        max_passage = max(max_passage, right_neighbor - left_neighbor);
    }

    // In kết quả theo đúng thứ tự ban đầu
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}