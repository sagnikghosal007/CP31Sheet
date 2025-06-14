//wee need zero of cp sheet 
/*
There is an array a
 consisting of non-negative integers. You can choose an integer x
 and denote bi=ai⊕x
 for all 1≤i≤n
, where ⊕
 denotes the bitwise XOR operation. Is it possible to choose such a number x
 that the value of the expression b1⊕b2⊕…⊕bn
 equals 0
?

It can be shown that if a valid number x
 exists, then there also exists x
 such that (0≤x<28
).

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤1000
). The description of the test cases follows.

The first line of the test case contains one integer n
 (1≤n≤103
) — the length of the array a
.

The second line of the test case contains n
 integers — array a
 (0≤ai<28
).

It is guaranteed that the sum of n
 over all test cases does not exceed 103
.

Output
For each set test case, print the integer x
 (0≤x<28
) if it exists, or −1
 otherwise.



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
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    long total_xor=0;
	    for(int i=0;i<n;i++){
	        total_xor^=a[i];
	    }
	    //if n is odd
	    if(n%2==1){
	       cout << total_xor << endl;
	    }
	    else{ //id n is even
	        if(total_xor==0)
	            cout << total_xor << endl;
	        else
	            cout << -1 << endl;
	    }
	}
	return 0;

}
