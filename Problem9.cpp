#include <iostream>
using namespace std;
int main(){
    long long a,b = 1,c = 1e9 + 7;
    cin >> a;
    for(long long i = 1; i <= a;i++){
        b =  (b*2) % c;
    }
    cout<<b;
}