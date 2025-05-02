#include <iostream>
#include <vector>
using namespace std;

/*Question  
  */

int main() {
    int t;
    cin >> t;
    
    while(t-->0) {
        int n;
        cin>>n;
        
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        int neg=0;
        int pos=0;
        for(int i:a){
            if(i<0) neg++;
            else pos++;
        }
        
        int op = 0;
        
        // Check if product condition is violated (odd number of -1's)
        if(neg % 2 == 1) {
            // Need to change one -1 to 1
            neg--;
            pos++;
            op++;
        }
        
        // Now check if sum condition is violated (more -1's than 1's)
        // After ensuring product is 1 (even number of -1's)
        if(neg > pos) {
            // Need to convert enough -1's to make sum non-negative
            int diff = neg - pos;
            // We need to convert (diff+1)/2 -1's to make sum ≥ 0
            // But we need to keep an even number of -1's
            int needToChange = (diff + 1) / 2;
            // Make sure we change an even number to preserve product = 1
            if(needToChange % 2 == 1) {
                needToChange++;
            }
            op += needToChange;
        }
        
        cout << op << endl;
    }
    return 0;
}
