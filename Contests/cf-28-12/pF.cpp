#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    if(n%2==1) {cout<<"-1"<<endl;}
    else {
        for(int i=1; i<n/2 + 1;i++) {
            cout<<2*i<<" "<<2*i-1<<" ";
        }
        cout<<endl;
    }




}
