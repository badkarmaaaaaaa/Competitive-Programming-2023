#include<bits/stdc++.h>
using namespace std;
#define N 5000
#define MIN -1000000000;

int memo[N];
int n,a,b,c;

int dp (int n) {
    if(n<0) return MIN;
    if(n==0) return 0;
    if(memo[n]) return memo[n];
    
    return memo[n]= 1+ max(dp(n-a),max(dp(n-b),dp(n-c)));
}


int main () {
    cin>>n>>a>>b>>c;
    cout<<dp(n)<<endl;

    return 0;
}