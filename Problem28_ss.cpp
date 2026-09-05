//Reading Books

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n,sum=0,maxtime=0,t;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>t;
        sum+=t;
        maxtime=max(maxtime,t);
    }
    cout<<max(2*maxtime,sum);
}