#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x = 0;
    cin>>x;
    long long a[x];
    for(int i=0; i<x; i++){
        cin>>a[i];
    }
    long long maxx=0;
    for(int i=0; i<x; i++){
        maxx = max(maxx,a[i]);
    }
    vector<int> d(maxx+1,0);
    for(long long i=0; i<x; i++){
      for(long long j=1; j<maxx; j++){
            if(a[i] % j ==0){
                d[j]++;
            }
        }
    }
    for(long long j=maxx-1; j>1; j--){
        if(d[j]>=2){
            cout<<j;
            break;
        }
    }
}