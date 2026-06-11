#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string a;
    vector<string> b;
    cin>>a;
    sort(a.begin(),a.end());
    do{
        b.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    cout<<b.size()<<"\n";
    for(string d:b){
        cout<<d<<"\n";
    }
}