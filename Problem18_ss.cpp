//Concert Tickets
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long numtick,numcus;
    cin>>numtick>>numcus;
    long long pricetick[numtick];
    for(long long i = 0; i < numtick;i++){
        cin>>pricetick[i];
    }
    long long cus[numcus];
    for(long long i = 0; i < numcus;i++){
        cin>>cus[i];
    }
    sort(pricetick,pricetick+numtick);
    long long a=0,b=0;
    while(b<numcus){
        if(a==numtick){
            a=0;
            b++;
            cout<<-1<<"\n";
            continue;
        }
        if(pricetick[a]<=cus[b]){
            cout<<pricetick[a]<<"\n";
            a++;
            b++;
            continue;
        }
        else{
            a++;
        }
    }
}


#include <bits/stdc++.h>
using namespace std;

// Cấu trúc lưu thông tin khách hàng: gồm số tiền và vị trí ban đầu(Kiến thức mới)
struct Customer {
    int price;
    int id;
};

// Hàm so sánh để sắp xếp khách hàng theo số tiền tăng dần
bool compareCus(Customer a, Customer b) {
    return a.price < b.price;
}

int main() {
    int numtick, numcus;
    cin >> numtick >> numcus;

    vector<int> pricetick(numtick);
    for (int i = 0; i < numtick; i++) {
        cin >> pricetick[i];
    }

    vector<Customer> cus(numcus);
    for (int i = 0; i < numcus; i++) {
        cin >> cus[i].price;
        cus[i].id = i; // Lưu lại vị trí ban đầu của khách
    }

    // Sắp xếp cả 2 mảng tăng dần
    sort(pricetick.begin(), pricetick.end());
    sort(cus.begin(), cus.end(), compareCus);

    vector<int> ans(numcus, -1); // Mảng lưu kết quả cuối cùng, mặc định là -1

    // Dùng hai con trỏ duyệt từ cuối mảng (từ lớn đến bé)
    int j = numtick - 1; // Con trỏ cho vé
    for (int i = numcus - 1; i >= 0; i--) { // Duyệt từng khách từ giàu nhất đến nghèo nhất
        
        // Dịch con trỏ vé xuống cho đến khi tìm được vé hợp túi tiền của khách i
        while (j >= 0 && pricetick[j] > cus[i].price) {
            j--;
        }

        // Nếu tìm được vé hợp lý (j vẫn >= 0)
        if (j >= 0) {
            ans[cus[i].id] = pricetick[j]; // Khách mua vé này
            j--; // Vé này đã bán, không ai được mua nữa
        }
    }

    // In ra kết quả theo đúng thứ tự khách hàng ban đầu
    for (int i = 0; i < numcus; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numtick, numcus;
    cin >> numtick >> numcus;

    // Dùng multiset để lưu vé (vì vé có thể trùng giá nhau)
    multiset<int> tickets;
    for (int i = 0; i < numtick; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    // Duyệt qua từng khách hàng theo đúng thứ tự ban đầu
    for (int i = 0; i < numcus; i++) {
        int max_price;
        cin >> max_price;

        // Tìm vé đầu tiên có giá LỚN HƠN số tiền khách có
        auto it = tickets.upper_bound(max_price);

        // Nếu it ở ngay đầu mảng, nghĩa là mọi vé đều lớn hơn tiền của khách
        if (it == tickets.begin()) {
            cout << -1 << "\n";
        } else {
            // Lùi lại 1 phần tử để được vé lớn nhất mà <= max_price
            it--; 
            cout << *it << "\n";//Dấu sao là để truy xuất thẳng vào giá trị có vị trí là it
            tickets.erase(it); // Vé đã bán thì xóa khỏi cửa hàng
        }
    }

    return 0;
}