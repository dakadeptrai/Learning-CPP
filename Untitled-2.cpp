<check_log>
#include <iostream>
using namespace std;
int main() {
    cout << "Hello";
    return 0;
}
=>
Success
Hello

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    cout << s;
    return 0;
}
=>
Success
2

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
  double math,writing;
  int b,c=0;
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
=>
Compilation error
Compiling failed with exitcode 1, compiler output:
collect2: error: ld returned 1 exit status
</check_log>
<example>
2
Nguyen Van A
5 6
Le Thi B
8.5 10
</example>
