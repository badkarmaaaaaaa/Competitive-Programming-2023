#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
    int t; cin>>t;
    string yesString ="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    while(t--) {
        string aux; cin>> aux;
        if(strstr(yesString.c_str(),aux.c_str())){
            cout << "YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
