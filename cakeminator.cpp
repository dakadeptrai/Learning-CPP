#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<char>> banh,int r,int c){
    int r1 = 0,c1 = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(banh[i][j]=='S'){
                r1++;
                break;
            }
        }
    }
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            if(banh[i][j]=='S'){
                c1++;
                break;
            }
        }
    }
    cout<<r*c-r1*c1;

}
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<char>> banh(r,vector<char>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>banh[i][j];
        }
    }
    solve(banh,r,c);
}