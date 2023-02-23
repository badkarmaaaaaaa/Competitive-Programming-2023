#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int count=1;

        vector <int> v;

        for(int i=1; i<s.size();i++) {
            bool Auxcond=false;
            if(s[i]==s[i-1]) {
                count++;
            }
            else {
                v.push_back(count);
                count=1;
                Auxcond=true;
            }

            if(i==s.size()-1) {
                v.push_back(count);
            }
        }

        int oddCounter=0;
        int auxArray[v.size()]={0};

        for(int k=0; k<v.size();k++) {
            if(v[k]%2==1) {
                oddCounter++;
                auxArray[k]=1;
            }
        }

        //   for(int k=0; k<v.size();k++) {
        //       cout<<v[k]<<" ";
        //   }
        //  cout<<endl;


        int prevOdd=0,ans=0;
        bool condition=true;
        if(oddCounter==0) {
            ans=0;
        }
        else {
            for(int k=0; k<v.size();k++) {
                if(auxArray[k]==1) {
                    if(condition) {
                        //cout<<"entro1"<<endl;
                        prevOdd=k;
                        condition=false;
                    }
                    else {
                        //cout<<"entro2"<<endl;
                        ans=ans+k-prevOdd;
                        condition=true;

                    }
                }
            }
        }

        int auxSec=ans;    
        int ans2=v.size();
        if(oddCounter==0) {ans2=v.size();}
        else {
            for(int k=1; k<v.size();k++) {
                if(v[k]<= auxSec) { 
                    if(ans2==2) {
                        ans2=ans2-1;
                    }
                    else {
                        ans2=ans2-2;
                        auxSec=auxSec-v[k];
                    }
                }
        }}

        cout<<ans<<" "<<ans2<<endl;


    }
    
    return 0;
}