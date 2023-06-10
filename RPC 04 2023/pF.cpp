#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define sz(A) int(A.size())
#define FIFO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(A) begin(A),end(A)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<pair<ll,ll>> vll;
typedef vector<pair<int,int>> vii;
double coder(char a){
	if(a=='N')return 90;
	if(a=='S')return 270;
	if(a=='E')return 0;
	if(a=='W')return 180;
}
map<pair<string,char>, int > m;
double converter(string d){
	if(d.size()==1){
		return coder(d[0]);
	}
	else if(d.size()==2){
		if(d[d.size()-2]=='S' && d[d.size()-1]=='E')return double(270+45);
		else{return (coder(d[d.size()-2])+coder(d[d.size()-1]))/2;}
	}
	else{
		string k = d.substr(d.size()-2,2);
		double angle=converter(k);
		return angle+(m[mp(k,d[0])])*(45.0-45.0/pow(2,d.size()-2));
	}
}
int main(){
	m[mp("NE",'N')]=1;
	m[mp("NE",'E')]=-1;
	m[mp("NW",'N')]=-1;
	m[mp("NW",'W')]=1;
	m[mp("SW",'S')]=1;
	m[mp("SW",'W')]=-1;
	m[mp("SE",'E')]=1;
	m[mp("SE",'S')]=-1;
	string s1,s2;
	cin>>s1>>s2;
	double angle1=converter(s1);
	double angle2=converter(s2);
	double k=min(abs(angle1-angle2),360.0-abs(angle1-angle2));
	cout<<fixed<<setprecision(6)<<k<<endl;
}