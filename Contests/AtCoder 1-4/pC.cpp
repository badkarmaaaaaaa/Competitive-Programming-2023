#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x; cin>>n>>x;

    int a[n];
    set <int> s;

    for(int i=0; i<n;i++) {
        cin>>a[i];
        s.insert(a[i]-x);
    }

    bool flag = true;
    for(int i=0; i<n;i++) {
        if(s.find(a[i]) != s.end()) {
            cout<<"Yes"<<endl;
            flag=false;
            break;
            //cout<<a[i]<<" "<<x-a[i]<<endl;
            }
    }

    if(flag) cout<<"No"<<endl;


    
    
    return 0;
}