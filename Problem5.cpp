/*
A permutation of integers 1,2,...,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.

Output:
Print a beautiful permutation of integers 1,2,...,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
*/
#include <iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    if(a!=2 && a!=3){
        for (long long i=1; i-1<a;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
        for (long long i=1; i-1<a;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
    else{
        cout<<"NO SOLUTION";
    }
}