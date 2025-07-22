// It is known that a contest can be represented by a string s
// consisting of uppercase Latin letters that denote problems. It is also known that a contest is difficult if it contains "FFT" or "NTT" as a contiguous substring.

//Your task is to rearrange the problem in contest s
//in such a way that this contest is not difficult. If the initial contest is not difficult, you may leave it as it is.

#include <bits/stdc++.h>
using namespace std;
#include <string>

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;

        int f = 0, t = 0, n = 0;
        string temp = "";

        for (char ch : s) {
            if (ch == 'F') f++;
            else if (ch == 'T') t++;
            else if (ch == 'N') n++;
            else temp += ch;
        }

        string ans = "";

        ans += string(t, 'T');
        ans += string(f, 'F');
        ans += string(n, 'N');
        ans += temp;

        cout << ans << endl;
    }
    return 0;
}
