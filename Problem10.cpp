#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    long long a,c=0;
    cin >> a;
    while(a>=5){
        c = c + (a / 5);
        a /= 5;
    }
    cout<<c;
}