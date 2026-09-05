#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    cout<<a<<" ";
    while(a!=1){
        if(a%2){
            a=a*3+1;
            cout<<a<<" ";
        }else{
            a/=2;
            cout<<a<<" ";
        }
    }
}