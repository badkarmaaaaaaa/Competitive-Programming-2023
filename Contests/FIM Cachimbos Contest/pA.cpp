#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d; cin>>a>>b>>c>>d;
    int array[7]={a,b,c,a+b,b+c,a+c,a+b+c};
    bool flag =false;

        for(int q=0; q<=d/a;q++) {
            for(int p=0; p<=d/b;p++) {
                if((d-p*b-q*a)%c==0 && (d-p*b-q*a)>=0) {
                    flag=true;
                }
            }
        }

        
        
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    
    return 0;
}