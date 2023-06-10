#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        long long cur = (((n*567)/9 + 7492)*235)/47 - 498;
        //cout<<cur<<endl;
        cur%=100;
        cur/=10;

        cout<<abs(cur)<<endl;
    }

    return 0;
}