#include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a;
    for(long long i=0;i<a;i++){
        cin >> b >> c;
        if((b+c)%3==0&&b<=2*c&&c<=2*b){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}