// B ZmodX=c (10min)
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int a,b,c; cin>>a>>b>>c;
        // x,y,z
        int x,y,z;
        z=c; y=b;
        x=(c-a)/b +1;
        x=a+b*x;

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    
    return 0;
}