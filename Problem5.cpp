#include <iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    if(a!=2 && a!=3){
        for (long long i=1; i-1<a;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
        for (long long i=1; i-1<a;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<"NO SOLUTION";
    }
}