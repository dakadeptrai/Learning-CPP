#include <vector>
#include <iostream>
using namespace std;
class edge{
public:
    int u;
    int v;
    edge(int u,int v){
        this->u=u;
        this->v=v;
    }
};
int main(){
    int n,b;
    cin>>n;
    int a[n][n];
    vector<edge> e;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]!=0 && i<j){
                e.push_back(edge(i,j));
            }
        }
    }
    cout<<e.size()<<"\n";
    for(edge x:e){
        cout<<x.u<<" "<<x.v<<"\n";
    }
}