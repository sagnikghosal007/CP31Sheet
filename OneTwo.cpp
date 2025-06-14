/*
Sample Input
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1
Your Output
2
-1
1
  */


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-->0){
	    long long  n;
	    cin >> n;
	    vector<long long> a(n);
	    int ct=0; 
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(a[i]==2) ct++;
	    }
	    if(ct%2!=0){
	        cout << -1 << endl;
	        continue;
	    }
	    int c=0;
	    for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) c++;
            if (c == ct / 2) {
                cout << i + 1 << endl;
                break;
            }
        }
	    
	}
	return 0;
}
