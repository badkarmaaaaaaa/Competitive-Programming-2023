#include<bits/stdc++.h>
using namespace std;

int main() {
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    string str; cin>>str;
    int AccSum=0;
    for(int i=0; i<str.size();i++) {
        if(str[i]=='1') AccSum=AccSum+a1;
        if(str[i]=='2') AccSum=AccSum+a2;
        if(str[i]=='3') AccSum=AccSum+a3;
        if(str[i]=='4') AccSum=AccSum+a4;
    }

    cout<<AccSum<<endl;





}

