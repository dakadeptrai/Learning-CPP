//Tasks and Deadlines
#include <bits/stdc++.h>
using namespace std;


struct Task {
    long long duration;
    long long deadline;
};

int main() {
    int n;
    cin >> n;

    vector<Task> tasks(n);
    for (int i = 0; i < n; ++i) {
        cin >> tasks[i].duration >> tasks[i].deadline;
    }

    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
        return a.duration < b.duration;
    });

    long long current_time = 0;
    long long max_reward = 0;

    for (int i = 0; i < n; ++i) {
        current_time += tasks[i].duration;
        max_reward += (tasks[i].deadline - current_time);
    }

    cout << max_reward << "\n";

    return 0;
}