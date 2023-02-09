#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n];
        int accXor=0;
        for(int i=0; i<n;i++) {
            int aux; cin>>aux;
            a[i]=aux;
            accXor=accXor^aux;
        }

        int auxXorI=0;

        int auxArrayXorJI[n];
        auxArrayXorJI[0]=a[0];
        for(int j=1; j<n;j++) {
            auxArrayXorJI[j]=auxArrayXorJI[j-1]^a[j];
        }

        if(accXor==0) {
            bool ind=true;
            // Respuesta seria un numero par de numeros iguales
            for(int i=1; i<n; i++) {
                auxXorI=0;
                for(int j=0;j<i;j++) {
                    auxXorI=auxXorI^a[j];
                }
                if(auxXorI==auxXorI^accXor) {
                    ind=false;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(ind) cout<<"NO"<<endl;
            
        }
        else {
            int auxXorJI=0,auxXorIL=0;
            bool ind=true;
            
            for(int l=2;l<n;l++) {
                auxXorIL=0;
                for(int i=1; i<l;i++) {
                    auxXorJI=0;
                    auxXorJI=auxArrayXorJI[i-1];
                    auxXorIL=auxArrayXorJI[l-1]^auxArrayXorJI[i-1];

                    if(auxXorJI==auxXorIL && auxXorIL==(accXor^auxXorIL^auxXorJI)) {
                        ind=false;
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(!ind) break;
            }
            if(ind) cout<<"NO"<<endl;
        }
    }
    return 0;
}

