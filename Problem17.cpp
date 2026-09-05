//String Reorder
#include <bits/stdc++.h>
using namespace std;
bool Valid(const vector<int>& count, int remaining_len) {
    int max_count = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
        }
    }
    // Ký tự xuất hiện nhiều nhất không được vượt quá một nửa số vị trí còn lại (làm tròn lên)
    return max_count <= (remaining_len + 1) / 2;
}
int main() {
    // Tối ưu hóa nhập xuất
    string s;
    cin >> s;
    int n = s.length();
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'A']++;
    }
    // Kiểm tra điều kiện tiên quyết ban đầu
    if (!Valid(count, n)) {
        cout << -1 << "\n";
        return 0;
    }
    string result = "";
    char last_char = ' ';
    // Dựng chuỗi từng ký tự một
    for (int i = 0; i < n; i++) {
        bool found = false;
        // Duyệt từ 'A' đến 'Z' để đảm bảo thứ tự từ điển nhỏ nhất
        for (int j = 0; j < 26; j++) {
            if (count[j] > 0 && (last_char == ' ' || (j + 'A') != last_char)) {
                // Thử chọn ký tự j
                count[j]--;
                // Kiểm tra xem sau khi chọn j, các ký tự còn lại có xếp hợp lệ được không
                if (Valid(count, n - 1 - i)) {
                    char chosen = j + 'A';
                    result += chosen;
                    last_char = chosen;
                    found = true;
                    break; // Tìm được ký tự nhỏ nhất hợp lệ, chuyển sang vị trí tiếp theo
                }
                // Quay lui nếu không hợp lệ
                count[j]++;
            }
        }
        // Trường hợp phòng hờ (thực tế nếu pass vòng Valid đầu tiên thì sẽ luôn tìm được)
        if (!found) {
            cout << -1 << "\n";
            return 0;
        }
    }
    cout << result << "\n";
    return 0;
}