//Gray Code
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Khởi tạo cho trường hợp cơ bản n = 1
    vector<string> gray_code = {"0", "1"};

    // Vòng lặp xây dựng dần từ n = 2 lên đến n đề bài yêu cầu
    for (int i = 2; i <= n; ++i) {
        int current_size = gray_code.size();
        
        // Bước 1: Sao chép và đảo ngược nửa sau (như soi gương)
        // Duyệt ngược từ cuối mảng về đầu để lấy phần đối xứng
        for (int j = current_size - 1; j >= 0; --j) {
            gray_code.push_back(gray_code[j]);
        }

        // Bước 2: Thêm '0' vào các phần tử nửa đầu
        for (int j = 0; j < current_size; ++j) {
            gray_code[j] = "0" + gray_code[j];
        }

        // Bước 3: Thêm '1' vào các phần tử nửa sau (vừa được nhân đôi ở trên)
        for (int j = current_size; j < gray_code.size(); ++j) {
            gray_code[j] = "1" + gray_code[j];
        }
    }

    // In toàn bộ kết quả ra màn hình
    for (const string &s : gray_code) {
        cout << s << "\n";
    }

    return 0;
}