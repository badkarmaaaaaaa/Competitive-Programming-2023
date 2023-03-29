#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    string s; cin>>s;
    int ans = 0;
    int auxAns=0;


    for(int i=0;i<n-1;i++) {
        if(s[i]==s[i+1]) {
            auxAns++;
        }

    }

    ans=max(ans,auxAns);

    cout<<ans<<endl;
    
    return 0;
}