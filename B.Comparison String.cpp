#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc-->0){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int maxc=1;
	    int c=1;
	    for(int i=1;i<n;i++){
	        if(s[i]==s[i-1]) {
	            c++;
	            maxc=max(c,maxc);
	        }
	        else c=1;
	    }
	    cout << maxc+1 << endl;
	}
	return 0;

}
