#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long a; cin>>a; a=a%10;
        long long b; cin>>b;
        int gauss[10]={1,1,4,4,2,1,1,4,4,2};

        b=b%gauss[a];
        int ans=1;
        for(int i=0; i<=b;i++) {
            ans=(ans*a)%10;
        }

        if(gauss[a]==1) ans=a;

        cout<<ans<<endl;


    }
    return 0;
}