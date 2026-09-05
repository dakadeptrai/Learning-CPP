//Apple Division
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long maxx=0,sum=0;
    int n,p[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];
    }
    for(int i=0;i<1<<n;i++){
        long long cs=0;
        for(int j=0;j<n;j++){
            if(i>>j&1){
                cs+=p[j];
            }
        }
        if(cs<=sum/2){
            maxx=max(maxx,cs);
        }
    }
    cout<<sum-maxx-maxx;
}