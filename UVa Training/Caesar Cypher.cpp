// Caesar Cypher
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

string cypher(string s, int shift) {
    while(shift < 0) {
        shift+=26;
    }
    
    
    string s2;
    for(char c:s) {
        bool Upper=false;
        char cAux=tolower(c);
        if(cAux!=c) Upper=true;

        if('a'<=c && c<='z') {
            int auxVal=c-'a';
            auxVal=(auxVal+shift)%26;
            char c2=auxVal+'a';
            s2 += c2;
        }
        else if('A' <= c && c <= 'Z'){
            int auxVal=c-'A';
            auxVal=(auxVal+shift)%26;
            char c2=auxVal+'A';
            s2 += c2;
        }
        else s2 += c;
    }
    return s2;
}

int main() {
    string nn;
    while(getline(cin, nn)){
        int n = stoi(nn);
        if(n==0) break;
        string s;
        getline(cin,s);
        
        cout<<cypher(s,n)<<endl;
    }
    
    return 0;
}