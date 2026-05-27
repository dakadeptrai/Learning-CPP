/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:
1  2  9  10 25
4  3  8  11 24
5  6  7  12 23
16 15 14 13 22
17 18 19 20 21
Your task is to find out the number in row x and column y.

Input:
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers x and y.

Output:
For each test, print the number in row x and column y.
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long x,y,z,m;
    cin>>z;
    for(long long i = 1;i<=z;i++){
        cin>>x;
        cin>>y;
        m = max(x,y);
        if(m%2==0){
            if(x==m){
                cout<<m*m - y+1<<"\n";
                continue;
            }
            if(y==m){
                cout<<(m-1)*(m-1)+x<<"\n";
                continue;
            }
        }else{
            if(x==m){
                cout<<(m-1)*(m-1)+y<<"\n";
                continue;
            }
            if(y==m){
                cout<<m*m - x + 1<<"\n";
                continue;
            }
        }
    }
    return 0;
}