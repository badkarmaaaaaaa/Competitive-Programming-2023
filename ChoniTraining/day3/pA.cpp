// pA -Burenka Plays with Fractions -9:42
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        long long a,b,c,d; cin>>a>>b>>c>>d;
        int count=0;
        long long aux1=a*d, aux2=b*c;

        if(aux1==aux2) {
            count=0;
        }
        else {
            if((aux1!=0 && aux2%aux1==0) or (aux2!=0 && aux1%aux2==0)) {
                count=1;
            }
            else count=2;
        }

        cout<<count<<endl;

        
    }
    
    return 0;
}