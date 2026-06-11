#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long a,b=1,d;
    vector<int> c;
    cin>>a;
    for(long long i = 0; i + 1 <= a; i++){
        cin>>d;
        c.push_back(d);
    }
    sort(c.begin(),c.end());
    for(long long i = 0; i + 2 <= a; i++){
        if(c[i] != c[i+1]){
            b++;
        }
    }
    cout<<b;
}