//Distinct Values Subarrays
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    set<long long> s;
    long long ans = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        while (s.count(a[right])) {
            s.erase(a[left]);
            left++;
        }
        s.insert(a[right]);
        ans += (right - left + 1);
    }

    cout << ans << "\n";

    return 0;
}