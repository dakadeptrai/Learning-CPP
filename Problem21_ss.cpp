#include <bits/stdc++.h>
using namespace std;

// Cấu trúc để lưu thông tin từng cây đèn theo đề bài cho
struct Light {
    int pos;     // Vị trí của đèn
    int sorted_idx; // Vị trí của đèn sau khi sắp xếp tăng dần
};

int main() {
    int x, n;
    cin >> x >> n;

    vector<int> p(n); // Lưu thứ tự thêm đèn gốc của đề bài
    vector<int> all_pos; // Lưu tất cả các mốc (0, các vị trí đèn, x)
    
    all_pos.push_back(0);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        all_pos.push_back(p[i]);
    }
    all_pos.push_back(x);

    // Sắp xếp các mốc từ nhỏ đến lớn
    sort(all_pos.begin(), all_pos.end());

    // Mảng lưu vị trí đèn bên trái và bên phải của từng mốc
    // Ví dụ: truoc[i] là chỉ số của mốc nằm ngay trước mốc i
    vector<int> truoc(all_pos.size());
    vector<int> sau(all_pos.size());
    
    int max_len = 0; // Kỷ lục đoạn đường dài nhất khi ĐÃ CÓ ĐỦ ĐÈN
    for (size_t i = 0; i < all_pos.size(); i++) {
        if (i > 0) {
            truoc[i] = i - 1;
            max_len = max(max_len, all_pos[i] - all_pos[i - 1]);
        }
        if (i < all_pos.size() - 1) {
            sau[i] = i + 1;
        }
    }

    // Tìm xem mỗi đèn trong đề bài đang nằm ở chỉ số nào sau khi sắp xếp
    vector<int> idx_in_sorted(n);
    for (int i = 0; i < n; i++) {
        // Tìm vị trí của p[i] trong mảng all_pos đã sắp xếp
        idx_in_sorted[i] = lower_bound(all_pos.begin(), all_pos.end(), p[i]) - all_pos.begin();
    }

    vector<int> ans(n);
    // Chạy ngược từ đèn cuối cùng về đèn đầu tiên (Nhổ đèn)
    for (int i = n - 1; i >= 0; i--) {
        ans[i] = max_len; // Kết quả tại bước này chính là max_len hiện tại

        int curr = idx_in_sorted[i]; // Vị trí đèn chuẩn bị nhổ
        int left = truoc[curr];      // Đèn bên trái nó
        int right = sau[curr];       // Đèn bên phải nó

        // Nhổ đèn 'curr' đi -> nối trực tiếp 'left' và 'right' với nhau
        sau[left] = right;
        truoc[right] = left;

        // Tính độ dài mới sau khi gộp đoạn và cập nhật kỷ lục max_len
        max_len = max(max_len, all_pos[right] - all_pos[left]);
    }

    // In ra kết quả theo thứ tự xuôi
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}