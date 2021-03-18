#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	ll xi[n],yi[n],i,res=1e6;
	for(i=0;i<n;i++){
		cin>>xi[i]>>yi[i];
	}
	ll ai[n],bi[n],ci[n],di[n];
	for(i=0;i<m;i++){
		cin>>ai[i]>>bi[i]>>ci[i]>>di[i];
	}
	for(i=0;i<m;i++){
		if(ci[i]<ai[i]){
			swap(bi[i],di[i]);
			swap(ai[i],ci[i]);
		}
		if(i%2==1)
		cout<<(res+1-ai[i])<<" "<<(res-bi[i])<<endl;
		else
		cout<<-ai[i]<<" "<<-bi[i]-1<<endl;
		
	}
	return 0;
}
