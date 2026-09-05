//Collecting Numbers
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,b,ans=1;
    cin>>n;
    long long a[n+1];
    for(long long i=0;i<n;i++){
        cin>>b;
        a[b]=i;
    }
    for(long long i=1;i<n;i++){
        if(a[i]>a[i+1]){
            ans++;
        }
    }
    cout<<ans;
}