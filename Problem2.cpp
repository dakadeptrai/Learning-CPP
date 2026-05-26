#include <iostream>
using namespace std;
int main(){
    long long n, b = 0;
    cin >> n;
    for( long long i=1;i<n;i++){
        long long a;
        cin >> a;
        b += a;
    }
    cout << (n*(n+1))/2 - b;
}