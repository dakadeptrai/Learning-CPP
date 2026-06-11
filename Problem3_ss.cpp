#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<int> wantsize(n);
    for(long long i=0;i<n;i++){
        cin>>wantsize[i];
    }
    vector<int> asize(m);
    for(long long i=0;i<m;i++){
        cin>>asize[i];
    }
    sort(wantsize.begin(),wantsize.end());
    sort(asize.begin(),asize.end());
    int a = 0, b = 0,result = 0;
    while((a<n) && (b<m)){
        if( (asize[b]) <= (wantsize[a] + k) && (asize[b]) >= (wantsize[a] - k)){
        a++;
        b++;
        result++;
        }else if(asize[b]<wantsize[a] - k){
            b++;
        }else{
            a++;
        }
    }
    cout<<result;
}