//towers
#include <bits/stdc++.h>
using namespace std;
int search(const vector<int> &a, int l, int r, int x){
    int res=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>x){
            res=mid;
            r=mid-1;
        }else{

            l=mid+1;
        }
    }
    return res;

}
int main(){
    long long a,b;
    cin>>a;
    int s[a];
    for(int i=0;i<a;i++){
        cin>>s[i];
    }
    vector<int> tower;
    for(int i=0;i<a;i++){
        b=search(tower,0,tower.size()-1,s[i]);
        if(b==-1){
            tower.push_back(s[i]);
        }else{
            tower[b]=s[i];
        }
    }
    cout<<tower.size();
}