#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0)return a;
	int k = gcd(b,a%b);
	return k;
}
int main(){
	ios_base::sync_with_stdio(false
	);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	int i=1;
	while(T--){
	int a,b,c;
	cin>>a>>b>>c;
	int k = (a>b) ? (gcd(a,b)) : gcd(b,a);
	//cout<<k<<endl;
	if(c%k == 0)cout<<"Case "<<i<<": Yes"<<endl;
	if(c%k !=0 )cout<<"Case "<<i<<": No"<<endl;
	i+=1;
}
}
