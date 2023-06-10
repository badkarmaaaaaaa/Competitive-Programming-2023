#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int iterator=0;
    while(cin>>s) {
        if(s=="#") break;

        iterator++;
        if(s=="HELLO") {cout<<"Case "<<iterator<<": ENGLISH"<<endl; continue;}
        if(s=="HOLA") {cout<<"Case "<<iterator<<": SPANISH"<<endl; continue;}
        if(s=="HALLO") {cout<<"Case "<<iterator<<": GERMAN"<<endl; continue;}
        if(s=="BONJOUR") {cout<<"Case "<<iterator<<": FRENCH"<<endl; continue;}
        if(s=="CIAO") {cout<<"Case "<<iterator<<": ITALIAN"<<endl; continue;}
        if(s=="ZDRAVSTVUJTE") {cout<<"Case "<<iterator<<": RUSSIAN"<<endl; continue;}

        cout<<"Case "<<iterator<<": UNKNOWN"<<endl;
    }

    return 0;
}