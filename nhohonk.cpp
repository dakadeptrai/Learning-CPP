#include <bits/stdc++.h>
using namespace std;
int f(int a[],int l, int r, int x){
    int res = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]<x){
            res = m;
            r = m - 1;
        }else{
            r = m - 1;
        }
    }
    return res;
}
int l(int a[],int l, int r, int x){
    int res = -1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]<x){
            res = m;
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
    int result = 0;
    for(int i = 0;i<n;i++){
        int location1 = f(a,i+1,n-1,k-a[i]);
        int location2 = l(a,i+1,n-1,k-a[i]);
        if(location1 != -1 && location2 != -1)result += location2 - location1 + 1;
    }
    cout<<result;
}