//Nested Ranges Check
#include <bits/stdc++.h>
using namespace std;
// Cấu trúc đại diện cho một đoạn (range)
struct Interval {
    int start;
    int end;
    int original_index;

    // OOP mặc định và khởi tạo
    Interval() : start(0), end(0), original_index(0) {}
    Interval(int s, int e, int idx) : start(s), end(e), original_index(idx) {}
};

bool compareIntervals(const Interval& a, const Interval& b) {
    //Nếu điểm bắt đầu khác nhau, đoạn nào bắt đầu trước (nhỏ hơn) thì đứng trước.
    if (a.start != b.start) {
        return a.start < b.start; // Xếp tăng dần theo `start`
    }
    //Nếu điểm bắt đầu giống nhau, đoạn nào kết thúc muộn hơn (lớn hơn) thì đứng trước.
    return a.end > b.end;// Xếp giảm dần theo `end`
}

int main() {
    // Tối ưu hóa tốc độ nhập xuất cho C++
    int n;
    cin >> n;

    vector<Interval> intervals(n);
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].start >> intervals[i].end;
        intervals[i].original_index = i;
    }

    // Sắp xếp các đoạn dựa trên hàm so sánh tùy biến đã định nghĩa
    sort(intervals.begin(), intervals.end(), compareIntervals);

    // Hai mảng lưu kết quả dựa theo chỉ số gốc (input order)
    vector<int> contains_another(n, 0);   // Dòng 1: Đoạn này có chứa đoạn nào khác không?
    vector<int> is_contained(n, 0);       // Dòng 2: Đoạn này có bị đoạn nào khác chứa không?

    //Kiểm tra xem đoạn hiện tại có BỊ đoạn nào phía trước chứa không ---
    // Duyệt tuyến tính từ trái qua phải (xuôi dòng mảng đã sắp xếp)
    int max_end_so_far = -1; // Khởi tạo giá trị vô cùng bé (vì end >= 1)

    for (int i = 0; i < n; i++) {
        // Nếu điểm kết thúc cực đại của các đoạn phía trước lớn hơn hoặc bằng điểm kết thúc của đoạn hiện tại
        // Nghĩa là đoạn hiện tại bị nuốt trọn bởi đoạn trước đó.
        if (max_end_so_far >= intervals[i].end) {
            is_contained[intervals[i].original_index] = 1;
        }
        // Cập nhật giá trị kết thúc lớn nhất đã nhìn thấy
        max_end_so_far = max(max_end_so_far, intervals[i].end);
    }

    //Kiểm tra xem đoạn hiện tại có CHỨA đoạn nào phía sau không ---
    // Duyệt ngược từ phải qua trái (ngược dòng mảng đã sắp xếp)
    int min_end_so_far = 2e9 + 7; // Khởi tạo giá trị vô cùng lớn (vì end <= 10^9)

    for (int i = n - 1; i >= 0; i--) {
        // Nếu điểm kết thúc cực tiểu của các đoạn phía sau nhỏ hơn hoặc bằng điểm kết thúc của đoạn hiện tại
        // Nghĩa là đoạn hiện tại bao trọn một đoạn nằm phía sau nó.
        if (min_end_so_far <= intervals[i].end) {
            contains_another[intervals[i].original_index] = 1;
        }
        // Cập nhật giá trị kết thúc nhỏ nhất đã nhìn thấy
        min_end_so_far = min(min_end_so_far, intervals[i].end);
    }

    // In kết quả theo đúng thứ tự yêu cầu của đề bài
        //Cho biết mỗi đoạn có chứa đoạn nào khác không
    for (int i = 0; i < n; i++) {
        cout << contains_another[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

        //Cho biết mỗi đoạn có bị đoạn nào khác chứa không
    for (int i = 0; i < n; i++) {
        cout << is_contained[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}