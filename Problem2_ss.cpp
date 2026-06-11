#include <bits/stdc++.h>
using namespace std;
int l(int a[],int l,int r,int x){
    int res = -1;
    int m;
    while(l <= r){
        m = (l+r)/2;
        if(a[m]==x){
            res = m;
            r = m - 1;
        }else if(a[m] < x){
            l = m + 1;
        }else{
            r = m - 1;
        }
        
    }
    return res;
}
int main(){
    long long n, x;
    cin >> n >> x;
    int lst[n];
    for(int i=0;i<n;i++){
        cin >> lst[i];
    }
    for(int i=0; i<n;i++){
        int l1 = l(lst,i+1,n-1,x-lst[i]);
        if(l1 != -1 ) {
            cout << i + 1 << " "<< l1 + 1;
            break;
        }else{
            cout<<"IMPOSSIBLE";
            break;
        }
    }
}