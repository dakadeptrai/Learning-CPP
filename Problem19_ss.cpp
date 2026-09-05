//Collecting Numbers II
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,b,ans=1,k;
    cin>>n>>k;
    long long a[n+5];
    long long val[n+5];
    for(long long i=0;i<n;i++){
        cin>>b;
        a[b]=i;
        val[i]=b;
    }
    for(long long i=1;i<n;i++){
        if(a[i]>a[i+1]){
            ans++;
        }
    }
    while(k--){
        long long u,v,x,y;
        cin>>u>>v;
        u--;v--;
        x=val[u];
        y=val[v];
        if(x-1>=1 && a[x-1]>a[x])ans--;
        if(x+1<=n && a[x]>a[x+1])ans--;
        if(y-1>=1 && y-1!=x && a[y-1]>a[y])ans--;
        if(y+1<=n && y+1!=x && a[y]>a[y+1])ans--;
        swap(val[u],val[v]);
        swap(a[x],a[y]);
        if(x-1>=1 && a[x-1]>a[x])ans++;
        if(x+1<=n && a[x]>a[x+1])ans++;
        if(y-1>=1 && y - 1 != x && a[y-1]>a[y])ans++;
        if(y+1<=n && y + 1 != x && a[y]>a[y+1])ans++;
        cout<<ans<<"\n";
    }
    return 0;
}
