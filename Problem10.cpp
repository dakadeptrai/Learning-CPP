/*
Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20!=2432902008176640000 and it has 4 trailing zeros.
*/
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