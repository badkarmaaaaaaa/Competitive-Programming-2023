#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll f[10007];
ll r[10007];

ll memo[10007];
int s,c,r0;

int func(int pos){
    ll res=0,sum=0,minval=INT_MAX;
    //if(p>c) return INT_MIN;
    if(pos==s) return 0;
    if(memo[pos] != -1) return memo[pos];
    for(int i=pos+1;i<=s;i++){
    	sum+=f[i];
    	if(sum>c) break;
    	minval=min(minval,func(i)+(i!=s)*((sum)*r[i]+500));
	}
	memo[pos] = minval;
    return minval;}


int main() {
	int t;cin>>t;
	while(t--) {
		memset(memo,-1,sizeof(memo));
		cin>>s>>c>>r0;
		r[0]=r0;f[0]=0;
		for (int i=1;i<=s;i++) {
			int fi,ri; cin>>fi>>ri;
			f[i]=fi;
			r[i]=ri;
		}
	cout<<c*r0+func(0)<<endl;
	}

}