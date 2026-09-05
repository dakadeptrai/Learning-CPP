#include <bits/stdc++.h>
using namespace std;
void split(string s,char separator){
    int start_index=0;
    while(true){
        int end_index=s.find(separator,start_index);
        if(end_index==string::npos){
            cout<<s.substr(start_index);
            break;
        }
        cout<<s.substr(start_index,end_index-start_index);
        start_index = end_index+1;
    }
}

int main(){
    //Tìm độ dài chuỗi
    // string name = "Khang";
    // int l = name.length();

    //Nhập vào không dấu cách
    // string name;
    // cin>>name;
    // cout<<name;

    //Nhập vào không hoặc có dấu cách
    // string name;
    // getline(cin,name);
    // cout<<name;

    //Lỗi:
    // string name;
    // int tuoi;
    // cin>>tuoi;
    // getline(cin,name); *Khi ta ấn ENTER để xuống hàng và nhập vào nội dung của name thì getline sẽ nhận luôn ký tự ENTER và bỏ luôn nội dung phía sau*
    // cout<<name;

    //Fix 1:
    // string name;
    // int tuoi;
    // cin>>tuoi;
    // getline(cin,name); Nhập luôn dấu Enter vào và sau đó nhập đè lên một lần nữa để lấy nội dung cần thiết
    // getline(cin,name);
    // cout<<name;

    //Fix 2:
    // string name;
    // int tuoi;
    // cin>>tuoi;
    // cin.ignore(); Bỏ qua một lần nhập đó chính là dấu Enter
    // getline(cin,name);
    // cout<<name;

    //Duyệt bằng foreach
    // string name = "Khang";
    // for(char x:name){
    //     cout<<x<<" ";
    // }

    //Duyệt bằng index
    // string name = "Khang";
    // for(int i=0;i<name.length();i++){
    //     cout<<name[i]<<" ";
    // }

    //Ta có thể so sánh bằng <,>,==,!= hoặc hàm compare()
    // string a = "abc";
    // string b="abcd";
    // cout<<a.compare(b); *nếu a < b in -1 nếu a == b in 0 nếu a > b in 1*
    
    //Hàm "Chuỗi".find("chuỗi cần tìm",start_index)
    // string a = "abcde";
    // string b="abcd";
    // cout<<a.find(b,0); *Nếu tìm được thì in ra index đầu xuất hiện còn không thì ra string::npos hoặc -1*
    
    //Hàm substr(start_index,length)
    // string a = "abcde";
    // string b= a.substr(0,4);
    // cout<<b;
    
    //Tách chuỗi ra bằng ký tự phân cách
    //string a = "Da Ka Dep Trai";
    //split(a,' ');
    
    //Mã ASCII
    // int x = 97;
    // cout<<char(x)<<"\n";
    // char y = 'A';
    // cout<<int(y)<<"\n";
    return 0;
}
// 
