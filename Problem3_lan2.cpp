#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    long long b=1,maxx=0;
    for(long long i = 0; i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            b++;
        }
        else{
            maxx = max(maxx,b);
            b=1;
        }
    }
    maxx=max(maxx,b);
    cout<<maxx;
}