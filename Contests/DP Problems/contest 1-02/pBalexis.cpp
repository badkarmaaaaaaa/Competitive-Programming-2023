#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int dp[100005];
int index(vi &p,int a){
    for(int i=0;i<p.size();i++){
        if(a==p[i]) return i+1;
    }
}
int solve(int n,vi &p,vi&a,int d){
    if(n<=0)return 0;
    if(dp[n]!=-1) return dp[n];
    if(index(p,a[n-2])>=index(p,a[n-1]) && index(p,a[n-1])>index(p,a[n-2])+d)return dp[n]=solve(n-1,p,a,d);
    else {
        int resul=1e5;
        for(int i=0;i<p.size()-1;i++){
            vi k(p.size());
            k=p;
            k[i]=p[i+1];
            k[i+1]=p[i];
            resul=min(resul,solve(n-1,k,a,d));
        }
        return dp[n]=resul+1;
    } 
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int m,d;cin>>m>>d;
        vi p(n),a(m);
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        int r=solve(n,p,a,d);
        cout<<r<<endl;
    }
    return 0;
}