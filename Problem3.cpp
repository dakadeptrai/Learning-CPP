#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    long long maxsize = 1, current = 1;
    for (long long i = 0; i + 1 < a.size(); i++){
        if (a[i] == a[i+1]){
            current++;
        }else{
            maxsize = max(maxsize,current);
            current = 1;
            }
        } 
    maxsize=max(maxsize,current);
    cout<<maxsize;
}
