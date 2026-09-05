#include <iostream>
#include <vector>
using namespace std;
int timsnt(int x){
  if(x<2){
    return 1;
  }
  int chiahet=0;
  for(int i=1;i<=x;i++){
    if(x%i==0){
      chiahet++;
    }
  }
  if(chiahet==2){
    return x;
  }else{
    return 1;
  }
}
void solve(vector<vector<int>> b,int m){
	int snt=1;
  for(int i=0;i<m;i++){
    int j=m-1-i;
    snt*=timsnt(b[i][j]);
  }
  cout<<snt;
}
int main(){
  int m;
  cin>>m;
  vector<vector<int>> a(m,vector<int>(m));
  for(int x=0;x<m;x++){
    for(int y=0;y<m;y++){
      cin>>a[x][y];
    }
  }
  solve(a,m);
}
