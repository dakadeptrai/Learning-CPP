#include <bits/stdc++.h>
using namespace std;
int l(int a[],int l, int r, int x){
    int res = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]==x){
            res = 1;
            break;
        }else if(a[m]<x){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    return res;
}
int main(){
    long long n,k;cin>>n>>k;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int location2 = -1;
    for(int i = 0;i<n;i++){
        int location2 = l(a,i+1,n-1,k+a[i]);
        if(location2 == 1){
            cout<<1;
            break;
        }
    }
    if(location2 != 1){
        cout<<-1;
    }
}