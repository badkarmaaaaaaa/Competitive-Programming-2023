#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int l,r,x;cin>>l>>r>>x;
        int a,b; cin>>a>>b;
        int diff=b-a;
        if(diff==0) cout<<"0"<<endl;
        else {
            if(diff>=x) cout<<"1"<<endl;
            else {
                int bMin=b-x;
                int bMax=b+x;
                if(bMin<l && bMax>r) cout<<"-1"<<endl;
                else {
                    int aMin=a-x;
                    int aMax=a+x;
                    if(aMin<l && aMax>r) cout<<"-1"<<endl;
                    else {
                        if((abs(r-a)<=x and abs(l-b)>=x and (l-b)<=x) or (abs(l-a)<=x and abs(r-b)>=x and (r-b)<=x)) {
                            cout<<"3"<<endl;
                        }
                        else {cout<<"2"<<endl;}
                        }


                    }
                }
            }
        }
    }

    return 0;
}