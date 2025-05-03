#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            // We can use 1 safely
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) 
                cout << 1 << " ";
            cout << endl;
        } else {
            // x == 1, so we cannot use 1
            if (k == 1 || (k == 2 && n % 2 == 1)) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                if (n % 2 == 0) {
                    // Use only 2s
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                } else {
                    // Use (n-3)/2 twos and one 3
                    cout << (n - 3) / 2 + 1 << endl;
                    for (int i = 0; i < (n - 3) / 2; i++)
                        cout << 2 << " ";
                    cout << 3 << endl;
                }
            }
        }
    }
    
    return 0;
}
