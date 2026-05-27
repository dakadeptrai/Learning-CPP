/*You are given all numbers between 1,2,...,n except one. Your task is to find the missing number

Output:
Print the missing number.
*/
#include <iostream>
using namespace std;
int main(){
    long long n, b = 0;
    cin >> n;
    for( long long i=1;i<n;i++){
        long long a;
        cin >> a;
        b += a;
    }
    cout << (n*(n+1))/2 - b;
}