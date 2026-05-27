#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    for(long long k = 1; k<=n;k++){
        if (k == 1){
            cout<<0<<"\n";
        }else if (k==2){
            cout<<6<<"\n";
        }else{
        long long h1= k*k,h2 = h1 -1;
        long long allpossibleposition=(h1*h2)/2;
        long long allattackposition = 4*(k-1)*(k-2);
        cout<<allpossibleposition-allattackposition<<"\n";
        }
    }
}