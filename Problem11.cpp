/*
You have two coin piles containing a and b coins. On each move, 
you can either remove one coin from the left pile and two coins from the right pile, 
or two coins from the left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.

Input:
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output:
For each test, print "YES" if you can empty the piles and "NO" otherwise.
*/
#include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a;
    for(long long i=0;i<a;i++){
        cin >> b >> c;
        if((b+c)%3==0&&b<=2*c&&c<=2*b){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}