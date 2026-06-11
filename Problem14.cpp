#include <iostream>
using namespace std;
void ThapHaNoi(long long n,int nguon,int dich,int trunggian){
    if(n==1){
        cout<<nguon<<" "<<dich<<"\n";
        return;
    }
    //Chuyen dia n - 1 tu nguon sang trung gian
    ThapHaNoi(n-1,nguon,trunggian,dich);
    //Chuyen dia lon nhat tu nguon sang dich
    cout<<nguon<<" "<<dich<<"\n";
    //Chuyen dia n - 1 tu trung gian sang dich
    ThapHaNoi(n-1,trunggian,dich,nguon);
    
}
int main(){
    long long n,sum=1;
    cin >> n;
    for(long long i = 1;i<=n;i++){
        sum *=2;
    }
    cout<< sum - 1<<"\n";
    ThapHaNoi(n,1,3,2);
}