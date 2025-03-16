#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    priority_queue<int> pq;

    // Read the elements into a max heap
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    // Process until one element remains
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();  // Largest
        int b = pq.top(); pq.pop();  // Second largest
        int x = a + b - 1;  // Max valid value that ensures triangle condition
        pq.push(x);  // Push new value back into heap
    }

    // The last remaining element
    cout << pq.top() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
