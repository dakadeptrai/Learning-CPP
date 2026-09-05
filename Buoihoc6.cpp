#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
using namespace std;

int main(){
  //
  tuple<int,string,float> t;
  get<0>(t)=10;
  get<1>(t)=10;
  get<2>(t)=10;
  cout<<get<0>(t)<<"\n";
  //
  pair<int,string> p(1,"Khang dep trai");
  cout<<p.first<<"\n";
  //unordered_set la tap hop khong sap xep
  unordered_set<int> us={1,2,3,4};
  us.insert(10);
  for(auto x:us){
    cout<<x<<" ";
  }
  cout<<"\n";
  //map tuong duong voi dict ben python
  //map<key,value> --> phai truy xuat bang key
  map<int,string> m {{1,"Khang"},{2,"Kheng"}};
  cout<<m[1];

  
}
//unordered_map --> dict --> hash table
//map --> red black tree

