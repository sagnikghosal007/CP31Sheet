#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), copy_a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            copy_a[i] = a[i];
        }

        sort(copy_a.begin(), copy_a.end());

        if (k == 1 && a != copy_a) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
