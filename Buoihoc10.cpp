// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Fraction{
// private:
//     int num;
//     int den;
// public:
//     //Constructor: Hàm khởi tạo
//     Fraction(){
//         this->num=0;
//         this->den=1;
//     }
//     Fraction(int x,int y){
//         this->num=x;
//         this->den=y;
//     }
//     string tostring(){
//         return to_string(num) +"/"+to_string(den);
//     }
//     friend istream& operator<<(istream& in, Fraction& f){
//         in>>f.num>>f.den;
//     }
//     friend ostream& 
// };//Nhớ dấu ";"
// int main(){
    
// }
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Diemso{
  private:
  string name;
  double math;
  double writing;
  public:
  Diemso(string a,double b,double c){
    this->name=a;
    this->math=b;
    this->writing=c;
  }
  double dtb(){
    return (this->math + this->writing)/2.0;
  }
};
int main(){
  double b,c=0,math,writing;
  cin>>b;
  string name;
  for(int i=0;i<b;i++){
    cin >> ws;
    getline(cin,name);
    cin>>math>>writing;
    Diemso a(name,math,writing);
   	if(a.dtb()>9.0){
      c++;
    }
	}
  cout<<c;
  return 0;
}