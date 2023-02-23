// A - Minimums and Maximums
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;

        if((l2>=l1 && l2<=r1)) {
            cout<<l2<<endl;
            continue;
            
        }

        if((l1>=l2 && l1<=r2)) {
            cout<<l1<<endl;
            continue;
        }

        cout<<l1+l2<<endl;
    }
    
    return 0;
}