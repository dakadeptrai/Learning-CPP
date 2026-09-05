#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,count=0;
    cin>>n;
    long long a[n];
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        while(a[i]<a[i-1]){
            a[i]++;
            count++;
        }
    }
    cout<<count;
}