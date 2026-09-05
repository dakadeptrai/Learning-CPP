//Josephus Problem I
#include <bits/stdc++.h>
/*using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> children(n);
    for (int i = 0; i < n; i++) {
        children[i] = i + 1;
    }
    bool skip = true;
    while (!children.empty()) {
        vector<int> survivors;
        for(int child:children){
            if(skip){
                survivors.push_back(child);
            }else{
                cout<<child<<" ";
            }
            skip = !skip;//Chiến thuật luân phiên giữa giữ và bỏ
            children=survivors;
        }
    }
    return 0;
}*/
using namespace std;

int main() {
    int n;
    cin >> n;
    
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    
    while (!q.empty()) {
        q.push(q.front());
        q.pop();
        
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    
    return 0;
}