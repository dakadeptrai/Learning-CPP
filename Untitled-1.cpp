<code>
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
    return (this->math + this->writing)/2;
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
   	if(a.dtb()>=9){
      c++;
    }
	}
  cout<<c;
  return 0;
}
</code>
<error>
Compile message
Compiling failed with exitcode 1, compiler output:
collect2: error: ld returned 1 exit status
</error>
Tôi code như trong <code>, compile không có lỗi trên máy window 11 của tôi nhưng lại bị lỗi như trong <error> khi compile trên web.
Bạn hãy research, giải thích và tìm cách fix.

