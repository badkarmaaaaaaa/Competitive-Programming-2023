#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> pos_imp;
       vector<int> pos_par;
       bool entro=false;
       for(int i=0;i<n;i++){
        int l;
        cin>>l;
        if(l%2!=0){
            pos_imp.push_back(i+1);
        }
        else {
            pos_par.push_back(i+1);
        }}

        if(pos_imp.size()>=3){
            entro=true;
            cout<<"YES"<<endl;
            cout<<pos_imp[0]<<" "<<pos_imp[1]<<" "<<pos_imp[2];
            cout<<endl;
            continue;
        }
        if(pos_par.size()>=2 && pos_imp.size()>=1){
            entro=true;
            cout<<"YES"<<endl;
            cout<<pos_par[0]<<" "<<pos_par[1]<<" "<<pos_imp[0]<<endl;
            continue;
        }
        
       
       if(!entro){
            cout<<"NO"<<endl;
        }
    } return 0;
}
