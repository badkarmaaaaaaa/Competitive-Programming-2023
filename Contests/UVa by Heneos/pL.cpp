#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2;
	while(getline(cin,s1)) {
		getline(cin,s2);
		
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
		
		int val1=0, val2=0;
		
		for(int i=0; i<s1.size();i++) {
			int tmp = s1[i]-'a' +1;
            //cout<<tmp<<endl;
			
			if(1<=tmp && tmp <= 26) val1+=tmp;
		}

        //cout<<endl;
		
		for(int i=0; i<s2.size();i++) {
			int tmp = s2[i]-'a' +1;
			//cout<<tmp<<endl;
			if(1<=tmp && tmp <= 26) val2+=tmp;
		}
		

		int sum1=0, sum2=0,sum1Aux=0,sum2Aux=0;
        
        
		while(val1) {
			int aux = val1%10;
			val1/=10;
			sum1+=aux;
		}

        while(sum1) {
            int aux = sum1%10;
			sum1/=10;
			sum1Aux+=aux;
        }
		
		while(val2) {
			int aux = val2%10;
			val2/=10;
			sum2+=aux;
		}

        while(sum2) {
            int aux = sum2%10;
			sum2/=10;
			sum2Aux+=aux;
        }
		
        //cout<<sum1Aux<<" "<<sum2Aux<<endl;

		float ans = min(sum1Aux,sum2Aux)/(1.0*max(sum1Aux,sum2Aux));
		ans*=100;
		//cout<<ans<<" %"<<endl;
        printf("%.2f", ans);
        cout<<" %"<<endl;
	}
	return 0;
}
