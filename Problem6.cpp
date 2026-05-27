#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long x,y,z,m;
    cin>>z;
    for(long long i = 1;i<=z;i++){
        cin>>x;
        cin>>y;
        m = max(x,y);
        if(m%2==0){
            if(x==m){
                cout<<m*m - y+1<<"\n";
                continue;
            }
            if(y==m){
                cout<<(m-1)*(m-1)+x<<"\n";
                continue;
            }
        }else{
            if(x==m){
                cout<<(m-1)*(m-1)+y<<"\n";
                continue;
            }
            if(y==m){
                cout<<m*m - x + 1<<"\n";
                continue;
            }
        }
    }
    return 0;
}