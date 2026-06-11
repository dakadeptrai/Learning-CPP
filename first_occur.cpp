#include <bits/stdc++.h>
using namespace std;
int f(int a[],int l,int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r)/2;//xét từ giữa của list
        if(a[m] == x){
            res = m;
            r = m - 1;//nếu ở vị trí m của list a bằng số cần tìm là x thì xét qua phía bên trái xem vị trí m đó có phải là số đầu tiên thỏa x hay không
        }else if(a[m] < x){
            l = m + 1;//nếu ở vị trí m của list a nhỏ hơn số cần tìm là x thì xét qua phía bên phải
        }else{
            r = m - 1;//nếu ở vị trí m của list a lớn hơn số cần tìm là x thì xét qua phía bên trái
        }
    }
    return res;
}
int l(int a[],int l,int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r)/2;
        if(a[m] == x){
            res = m;
            l = m + 1;//nếu ở vị trí m của list a bằng số cần tìm là x thì xét qua phía bên phải xem vị trí m đó có phải là số đầu tiên thỏa x hay không
        }else if(a[m] < x){
            l = m + 1;//nếu ở vị trí m của list a nhỏ hơn số cần tìm là x thì xét qua phía bên phải
        }else{
            r = m - 1;//nếu ở vị trí m của list a lớn hơn số cần tìm là x thì xét qua phía bên trái
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int r1=f(a,i+1,n-1,x-a[i]);
        int r2=l(a,i+1,n-1,x-a[i]);
        if(r1 != -1) ans += (r2-r1+1);
    }
    cout<<"Tổng số các số trong mảng có tổng bằng "<<x<<" là: "<<ans;
}