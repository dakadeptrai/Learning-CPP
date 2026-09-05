#include <iostream>
#include <vector>
using namespace std;
void insertAsc(vector<int>& a,int n,int x){
    int i=n;
    while(i>0){
         if(a[i-1]<=x){
            break;
         }
        a[i]=a[i-1];
        i--;
    }
    a[i]=x;
}
int main(){
    int x;
    cin>>x;
    vector<int> a(x+1);
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=1;i<x;i++){
        int b=a[i];
        insertAsc(a,i,b);
    }
    for(int i=0;i<x;i++){
        cout<<a[i];
    }
}