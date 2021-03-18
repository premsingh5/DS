#include<iostream>
#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
			ll n,k;
	cin>>n>>k;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll maxsofar=0,maxhere=0;
	ll k1= (k>1) ? 2:1;
	bool nonnegative=true;
	for(ll i=0;i<n*k1;i++){
		ll ind=i%n;
		if(arr[i]<0)nonnegative=false;
		if(maxhere+arr[ind]>0)maxhere+=arr[ind];
		else
		maxhere=0;
		if(maxhere>maxsofar)
		maxsofar=maxhere;
	}
	ll max=LONG_MIN;
	if(maxsofar==0){
		for(int i=0;i<n;i++){
			if(arr[i]>max)max=arr[i];
		}
		maxsofar=max;
	}
	if(nonnegative){
		maxsofar=maxsofar*k/k1;
		cout<<maxsofar<<endl;
	}
	else
	cout<<maxsofar<<endl;
	}
return 0;
}
