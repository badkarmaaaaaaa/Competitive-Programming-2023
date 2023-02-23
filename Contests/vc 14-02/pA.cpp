#include<bits/stdc++.h>
using namespace std;


long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main() {
    int t; cin>>t;
    while(t--) {
        long long x; cin>>x;
        int aux = log2(x);
        long long auxX= binpow(2,aux);

        if(x==1 or x==2) {
            cout<<3<<endl; continue;
        }

        if(x-auxX==0) {
            cout<<x+1<<endl;
        }
        else {
            long long auxVar = x-auxX;
            long long lastVal = auxVar;
            while(true) {
                aux=log2(auxVar);
                auxVar=auxVar-binpow(2,aux);   

                if(auxVar>0) {
                    lastVal=auxVar;
                }
                else {
                    break;
                }
            }
            cout<<lastVal<<endl;
        }
        

    }
    
    return 0;
}