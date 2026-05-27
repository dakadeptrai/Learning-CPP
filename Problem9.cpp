/*
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Output:
Print the result modulo 10^9+7.
*/
#include <iostream>
using namespace std;
int main(){
    long long a,b = 1,c = 1e9 + 7;
    cin >> a;
    for(long long i = 1; i <= a;i++){
        b =  (b*2) % c;
    }
    cout<<b;
}