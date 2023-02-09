#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int a,b; cin>>a>>b;
        int j=1;
        if(a==0) {
            cout<<"1"<<endl;
            continue;
        }
        if(b==0) {
            cout<<a+1<<endl;
            continue;
        }
        cout<<a+2*b+1<<endl;
    }

    return 0;
}

