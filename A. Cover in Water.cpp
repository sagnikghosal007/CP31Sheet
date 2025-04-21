//'.'-> frepresents empty 
//'#' -> represents block
// if i+1 and i-1 filled with water thhen i is also filled with water 
//basically check for 3 consecutive '.' then ans will alwyas be 2
// else then juts return the count

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int tc;
    cin>> tc;
    while(tc-->0){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0; // for counting the empty cells 
        bool flag=false;// for keeping track of the 3 consecutive empty cells
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                flag=true;
                break;
            }
            if(s[i]=='.') cnt++;
        }
        if(flag)
            cout<< 2 << endl;
        else 
            cout << cnt << endl;
    }
    return 0;
}
