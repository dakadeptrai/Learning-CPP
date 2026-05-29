/*Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.

Input
The only input line contains an integer n.

Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. 
First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.*/

#include <iostream>
#include <list>
using namespace std;
int main(){
    long long a;
    list<int> b1 = {};
    list<int> b2 = {};
    cin >> a;
    if((a*(a+1)/2)%2){
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<"\n";
    if(a%4==0){
        for(long long i = 0; i + 1<=a/4;i++){
            b1.push_back(4*i+1);
            b1.push_back(4*i+4);
            b2.push_back(4*i+2);
            b2.push_back(4*i+3);
        }
    }else{
        b1.push_back(1);
        b1.push_back(2);
        b2.push_back(3);
        for(long long i = 1; i<=(a-3)/4;i++){
            b1.push_back(4*i);
            b1.push_back(4*i+3);
            b2.push_back(4*i+1);
            b2.push_back(4*i+2);
        }
    }
    cout<<b1.size()<<"\n";
    for(long long c: b1){
        cout<<c<<" ";
    }
    cout<<"\n";
    cout<<b2.size()<<"\n";
    for(long long c: b2){
        cout<<c<<" ";
    }
}

