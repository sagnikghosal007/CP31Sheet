#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

  // Main Argument : to get lkargest K we need gcd(k, p-i))
	int tc;
	cin >> tc;
	while(tc-->0){
	    int n;
	    cin >> n;
	    int gcd=0;
	    for(int i=1;i<=n;i++){
	        int a;
	        cin >> a;
	        int k=abs(a-i);
	        gcd=__gcd(k,gcd);
	        
	    }
	    cout << gcd << endl;
	}
	return 0;
}

