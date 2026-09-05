#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,tonglt=0,tongtt=0,a;
    cin>>n;
    tonglt=(n*(n+1))/2;
    for(long long i = 0;i<n-1;i++){
        cin>>a;
        tongtt+=a;
    }
    cout<<tonglt-tongtt;
}