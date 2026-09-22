#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc-->0){
	    int a,b,c;
	    cin >>a>>b>>c;
	    cout << max(abs(a - b), abs(a - b + c)) << "\n";
	}
	return 0;

}
