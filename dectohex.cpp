#include <iostream>
#include <vector>
using namespace std;
string dec_to_hex(int n){
    vector<string> a={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    if(n<=15){
        return a[n];
    }
    return dec_to_hex(n/16) + dec_to_hex(n%16);
}
int main(){
    int n;
    cin>>n;
    cout<<dec_to_hex(n);
}