#include <bits/stdc++.h>
using namespace std;
void nguyento(int n){
    vector<bool>nguyento(n+1,true);
    nguyento[0]=nguyento[1]=false;
    for(int i = 2;i*i<=n;i++){
        if(nguyento[i]){
            for(int j = i*i;j<=n;j+=i){
                nguyento[j]=false;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(nguyento[i])cout<<i<<" ";
    }
}
int main(){
    cout<<"Hay nhap so ban muon vao day: ";
    int gioihan=0;
    cin>>gioihan;
    nguyento(gioihan);
}