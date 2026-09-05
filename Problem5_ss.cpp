//Restaurant Customers
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long people;
    cin>>people;
    pair<long long, long long> time[people*2];
    int ix = 0;
    for(long long j=0;j<people;j++){
        int stay,leave;
        cin>>stay>>leave;
        time[ix].first=stay;time[ix].second=1;
        ix++;
        time[ix].first=leave;time[ix].second=-1;
        ix++;
    }
    sort(time, time + people * 2);
    long long ans=0,c=0;
    for(int i = 0; i<people*2;i++){
        c+=time[i].second;
        ans=max(ans,c);
    }
    cout<<ans;
}