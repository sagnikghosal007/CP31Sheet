/*
Mocha likes arrays, and Serval gave her an array consisting of positive integers as a gift.

Mocha thinks that for an array of positive integers a
, it is good iff the greatest common divisor of all the elements in a
 is no more than its length. And for an array of at least 2
 positive integers, it is beautiful iff all of its prefixes whose length is no less than 2
 are good.

For example:

[3,6]
 is not good, because gcd(3,6)=3
 is greater than its length 2
.
[1,2,4]
 is both good and beautiful, because all of its prefixes whose length is no less than 2
, which are [1,2]
 and [1,2,4]
, are both good.
[3,6,1]
 is good but not beautiful, because [3,6]
 is not good.
Now Mocha gives you the gift array a
 of n
 positive integers, and she wants to know whether array a
 could become beautiful by reordering the elements in a
. It is allowed to keep the array a
 unchanged.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤100
) — the length of array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤a1,a2,…,an≤106
) — the elements of array a
.

Output
For each test case, print Yes if it is possible to reorder the elements in a
 to make it beautiful, and print No if not.

You can output Yes and No in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

Example
Input
6
2
3 6
3
1 2 4
3
3 6 1
3
15 35 21
4
35 10 35 14
5
1261 227821 143 4171 1941
Output
No
Yes
Yes
No
Yes
Yes
Note
In the first test case, neither [3,6]
 nor [6,3]
 are beautiful, so it's impossible to obtain a beautiful array by reordering the elements in a
.

In the second test case, [1,2,4]
 is already beautiful. Keeping the array a
 unchanged can obtain a beautiful array.




  */

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main() {
    int  t ;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int s=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(a[i],a[j])<=2){
                    s=1;
                }
            }
        }
        if(s==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    } 
    return 0;

}
