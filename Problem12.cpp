/*Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input
The only input line has a string of length n consisting of characters A–Z.

Output
Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c[26]={}, c1=0;
    for(char d : s)
        ++c[d-'A'];
    for(int i = 0; i<26; i++){
        if(c[i] % 2 !=0){
            c1++;
        }
    }
    if(c1>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    string t;
    string mid;
    for (int i = 0; i < 26; i++) {
        if (c[i] % 2 != 0) {
            mid += (char)('A' + i);
        }
        for (int j = 0; j < c[i] / 2; j++) {
            t += (char)('A' + i);
        }
    }
    cout<<t;
    cout<<mid;
    reverse(t.begin(), t.end());
    cout << t;
}