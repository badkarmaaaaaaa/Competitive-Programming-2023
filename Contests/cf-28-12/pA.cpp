#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int Mcounter=0,Ccounter=0;
    while(n--) {
        int m,c;
        cin>>m>>c;
        if(m==c) {
            Mcounter++;
            Ccounter++;
        }
        else {
            if(m>c) Mcounter++;
            else Ccounter++;
        }

    }

    //cout<<Mcounter<<" "<<Ccounter<<endl;
    if(Mcounter==Ccounter) {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else {
        if(Mcounter<Ccounter) cout<<"Chris"<<endl;
        else cout<<"Mishka"<<endl;
    }
    return 0;
}

