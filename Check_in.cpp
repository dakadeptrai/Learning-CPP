#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin>>n;
    pair<long long,long long>a[n];
    for(long long i = 0;i<n;i++)cin>>a[i].second>>a[i].first;
    long long count = 1;
    sort(a,a+n);
    long long end = a[0].first;
    for(long long i = 1;i<n;i++){
        if(a[i].second>=end){
            end = a[i].first;
            count++;
        }
    }
    cout<<count;
  int m,n;
  cin>>m>>n;
 	vector<vector<int>> matrix(m,vector<int>(n));
  for(vector<int> x:matrix){
    for(int y:x){
      cin>>y;
    }
  }
  for(int x=0;x<n;x++){
    int am=0;
    for(int y=0;y<m;y++){
      if(matrix[x][y]<0){
        am++;
      }
    }
    if(am==m){
      cout<<x+1<<" ";
    }
    am=0;
  }

}