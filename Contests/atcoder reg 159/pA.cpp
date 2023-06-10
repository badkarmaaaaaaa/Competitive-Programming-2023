#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

int main() {
    long long a,b; cin>>a>>b;
    long long aux1=max(a,b), aux2=min(a,b);
    a=aux1; b=aux2;
    long long aux;

    long long cnt=0;

    while(true) {
        
        if(a-b==1) {
            cnt+=b;
            break;
        }

        aux=gcd(a,b);
        a-=aux;
        b-=aux;
        cnt++;
        if(a-aux <= 0 or b-aux <=0) break;
        
    }
    cout<<cnt<<endl;
    
    return 0;
}