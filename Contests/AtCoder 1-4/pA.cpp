#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    string s; cin>>s;

    bool flag = true;

    for(int i=0; i<n-1;i++) {
        if(s[i]==s[i+1]) flag=false;
    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}