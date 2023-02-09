#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
long long mod = 1e9+7;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a%mod;
    else
        return res * res%mod;
}

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n%2==0){
            cout<<"No"<<endl;
        }else{
            cout<<"YES"<<endl;
            int c=0;
            for(int i=0;i<n;i++){
                if(i<n/4+2){
                    cout<<i+1<<" "<<2*n-i-c<<endl;
                    c++;
                }else{
                    c--;
                    cout<<i+1<<" "<<2*n-i+c<<endl;
                }
             }
        }
    } 
    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11 12 .....
// 15