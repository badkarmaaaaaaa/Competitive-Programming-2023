#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char recipe;
ll rb,rs,rc;
ll nb,ns,nc,pb,pc,ps,rub;

bool test(ll me) {
	ll mb=max(pb*(me*rb-nb),0ll), ms=max(ps*(me*rs-ns),0ll), mc=max(pc*(me*rc-nc),0ll);
	ll needmoney=mb+ms+mc;
	if(needmoney > rub) {
		return 0;
	}
	else {
		return 1;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string s;cin>>s;
	
	for(int i=0; i<s.size();i++) {
		if(s[i]=='B') rb++;
		if(s[i]=='S') rs++;
		if(s[i]=='C') rc++;
	}
	
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>rub;
	
	ll lo=0,hi=1e13,me=0;
	
	while(lo<hi) {
		me = lo + (hi-lo+1)/2;
		if(test(me)) {
			lo=me;
		}
		else {
			hi=me-1;
		}
	}
		
	cout<<lo<<endl;
	
	return 0;
}