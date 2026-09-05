#include <iostream>
using namespace std;
int GCD(int a,int b){
  int g = 0;
  for(int i = 1;i<=min(a,b);i++){
    if(a%i == 0 && b%i == 0){
      g=i;
    }
  }
  return g;
}
void solution(int a,int b,int &c,int &d){
  c=a/GCD(a,b);
  d=b/GCD(a,b);
}
int main(){
  int a,b,c,d;
  cin>>a>>b;
  
  solution(a,b,c,d);
  cout<<c<<" "<<d;
}