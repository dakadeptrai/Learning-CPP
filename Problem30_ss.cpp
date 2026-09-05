//Nearest Smaller Values
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    stack<int> nganxep;
    for(int i=1;i<n+1;i++){
        while(!nganxep.empty()&&a[nganxep.top()]>=a[i]){
            nganxep.pop();
        }
        if(nganxep.empty()){
            cout<<0<<' ';

        }else{
            cout<<nganxep.top()<<' ';
        }
        nganxep.push(i);
    }
}