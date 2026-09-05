//Ferris Wheel
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long numkid,weight;
    cin>>numkid>>weight;
    int kid[numkid];
    for(long long i = 0;i<numkid;i++){
        cin>>kid[i];
    }
    sort(kid,kid+numkid);
    long long ans = 0;
    for(long long i=0,j=numkid-1;i<j;){
        while(i<j&&kid[i]+kid[j]>weight){
            --j;
        }
        if(i>=j)break;
        ans++;
        i++;j--;
    }
    cout<<numkid-ans;
}