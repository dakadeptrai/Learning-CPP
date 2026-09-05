//Playlist
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long left = 0,maxlen=0,n;
    cin>>n;
    map<int, int> last_pos;
    long long k[n];
    for(long long i = 0; i<n; i++){
        cin>>k[i];
    }
    for(long long right = 0;right<n;right++){
        if(last_pos.count(k[right])&&last_pos[k[right]]>=left){
            left=last_pos[k[right]]+1;
        }
        last_pos[k[right]]=right;
        maxlen=max(maxlen,right-left+1);
    }
    cout<<maxlen;

}