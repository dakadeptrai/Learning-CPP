#include <iostream>
using namespace std;
int main(){
    long long n,step=0,b=1;
    cin >> n;
    for( long long i=1;i-1<n;i++){
        long long a;
        cin >> a;
        while(a<b){
            a++;
            step++;
        }
        b = a;
    }
    cout<<step;
}