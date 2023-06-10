#include<bits/stdc++.h>
using namespace std;

int calc(int x, int y, int n, int m) {
    int result=0;
    if(x>1) result++;
    if(x<n) result++;
    if(y>1) result++;
    if(y<m) result++;

    return result;
}

int main() {
    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;

        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

        int ans=min(calc(x1,y1,n,m),calc(x2,y2,n,m));

        cout<<ans<<endl;


    }
    
    return 0;
}