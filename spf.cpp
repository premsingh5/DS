#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<fstream>
using namespace std;
bool isprime(int n){
	if(n<2)return false;
	if(n%2==0)return(n==2);
	int limit = (int)sqrt((double)n);
	for(int i=3;i<=limit;i+=2){
		if(n%i==0)return false;
	}
	return true;
}

int spf(int n) 
{ 
    if (n % 2 == 0) 
        return 2; 
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
    return n; 
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ofstream outfile;
	outfile.open("output.txt", ios::out);
	//cout<<spf(61);
	int T=1;
	//cin>>T;
	while(T--){
		for(int j=1;j<=200;j++){
				int N=j;
		//cin>>N;
		bool Y=false;
		for(int i=6;i<=N/2;i++){
			int a=spf(i);
			int b=spf(N-i);
			if(i%a!=0 || i/a==1 ||  (N-i)/b==1 || (N-i)%b!=0)continue;
			if(!isprime(i/a)) continue;
			if(!isprime((N-i)/b))continue;
			if(__gcd(a,i/a)==1 &&__gcd(b,(N-i)/b)==1){
				//cout<<"YES"<<endl;
				outfile<<j<<" "<<"YES"<<endl;
				//cout<<i<<' '<<N-i<<' '<<a<<b<<endl;
				Y=true;
				break;
			}
		}
		if(!Y)outfile<<j<<" "<<"NO"<<endl;
	}
		}
	outfile.close();
	
}
