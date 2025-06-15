/*
You need to cook as many portions of shashlik as possible, and you have an unlimited number of portions of two types available for cooking:

The first type requires a temperature of at least a
 degrees at the start of cooking, and after cooking, the grill's temperature decreases by x
 degrees.
The second type requires a temperature of at least b
 degrees at the start of cooking, and after cooking, the grill's temperature decreases by y
 degrees.

 5
10 3 4 2 1
1 10 10 1 1
100 17 5 2 3
28 14 5 2 4
277 5 14 1 3

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin >> t;
     while(t-->0){
         int k,a,b,x,y;
         cin >> k >> a >> b >> x >> y ;
         if(x>y){
             swap(x,y);
             swap(a,b);
         }
         int diff1=k-a;
         int l=0;
         if(diff1>=0){
             l=diff1/x+1;
             k-=x*l;
         }
         int diff2=k-b;
         if(diff2>=0) l+=diff2/y+1;
         
         
         cout << l << endl;
     }
     return 0;

}
