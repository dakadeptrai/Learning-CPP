/*#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    vector<int> wantsize(n);
    for(long long i=0;i<n;i++){
        cin>>wantsize[i];
    }
    
    int a = 0, b = 1,result=0;
    while((a<=n-2) && (b<=n-1)){
        if(wantsize[a]+wantsize[b]==m){
        cout<<a+1<<" "<<b+1;
        result++;
        break;
        }else{
            b++;
            if (b == n){
                a++;
                b=a+1;
            }
        }
    }
    if(result == 0){
        cout<<"IMPOSSIBLE";
    }
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    map<long long, int> pos; 
    bool found = false;

    for (int i = 1; i <= n; i++) {
        long long current_val;
        cin >> current_val;
        
        long long target = m - current_val;
        
        if (pos.count(target)) {
            cout << pos[target] << " " << i << "\n";
            found = true;
            break;
        }
        
        pos[current_val] = i;
    }

    if (!found) {
        cout << "IMPOSSIBLE\n";
    }
}