//Sum of Three Values
#include <bits/stdc++.h>
using namespace std;

// Cấu trúc lưu giá trị và chỉ số ban đầu (1-indexed)
struct Element {
    int value;
    int original_index;
};
// Hàm so sánh để sắp xếp tăng dần theo giá trị
bool compareElements(const Element& a, const Element& b) {
    return a.value < b.value;
}
int main() {
    int n, x;
    cin >> n >> x;
    vector<Element> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].value;
        a[i].original_index = i + 1;
    }
    // Sắp xếp mảng tăng dần theo giá trị phần tử
    sort(a.begin(), a.end(), compareElements);
    // Duyệt qua từng phần tử để cố định phần tử thứ nhất
    // Vòng lặp dừng ở n-3 vì cần chừa ít nhất 2 phần tử phía sau cho left và right
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        // Kỹ thuật hai con trỏ để tìm 2 phần tử còn lại
        while (left < right) {
            // Dùng kiểu dữ liệu long long để tránh tràn số khi cộng 3 số nguyên lớn
            long long current_sum = (long long)a[i].value + a[left].value + a[right].value;
            if (current_sum == x) {
                // Đã tìm thấy 3 phần tử có tổng bằng x
                cout << a[i].original_index << " " 
                     << a[left].original_index << " " 
                     << a[right].original_index << "\n";
                return 0; // Kết thúc chương trình ngay lập tức
            }
            else if (current_sum < x) {
                left++; //Tăng tổng lên
            }
            else {
                right--; // Giảm tổng xuống
            }
        }
    }
    // Nếu đã duyệt hết các trường hợp mà không tìm thấy
    cout << "IMPOSSIBLE\n";
    return 0;
}