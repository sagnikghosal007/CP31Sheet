#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>> tc;
	while(tc-->0){
	    int n;
	    cin>>n;
	    vector<int> a(3);
	    
	    for(int i=0;i<3;i++){
	        cin >> a[i];
	    }
	    int mini = *min_element(a.begin(), a.end());
	    cout << n - mini << endl;
	}
	return 0;

}
