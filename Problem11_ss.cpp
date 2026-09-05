//Maximum Subarray Sum
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long current_sum = x[0];
    long long max_sum = x[0];

    for (int i = 1; i < n; i++) {
        current_sum = max(x[i], current_sum + x[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";

    return 0;
}
