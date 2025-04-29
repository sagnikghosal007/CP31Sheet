//1st player choose button a , 2nd  player choose button b  and button c can be chosen by both 
#include <bits/stdc++.h>
using namespace std;

// Shortcuts
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Fast IO
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Solve one testcase
void solve() {
    int a,b,c;
    cin >> a ;
    cin >> b;
    cin >> c;
    
 
    if(c % 2 == 1) {//odd
            if(b>a){
                cout << "Second" << endl;
            }
            else{
                cout<< "First" << endl;
            }
    }
    else{
        //even 
        if(a>b){
            cout << "First" << endl;
        }
        else {
            cout << "Second" << endl;
        }
    }
}

// Main
int32_t main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) solve();
}
