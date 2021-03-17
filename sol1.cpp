#include <bits/stdc++.h>
#include<fstream>
using namespace std;
const int N=200;
int prime_factor[N+2];
vector<pair<int,int> > prime_factors[N+2];
bool isvalid(int n,int i){
    if(prime_factors[i].size()==2 && prime_factors[n-i].size()==2){
        for(auto v:prime_factors[i])
            if(v.second!=1 )
                return false;
        for(auto v:prime_factors[n-i])
            if(v.second!=1 )
                return false;
        return true;        
    }
    return false;
}
int main() {
	ofstream outfile;
	outfile.open("output1.txt", ios::out);
	// your code goes here
	for(int i=2;i<=N;i++){
	    if(prime_factor[i]!=0)
	        continue;
	   prime_factor[i]=i;
	   for(int j=i*2;j<=N;j+=i){
	       prime_factor[j]=i;
	   }
	    
	}
// 	cout<<5;
	for(int i=2;i<=N;i++){
	    int x=i;
	    map<int,int> m;
	    while(x!=1){
	        m[prime_factor[x]]++;
	        x/=prime_factor[x];
	    }
	    for(auto v:m){
	        prime_factors[i].push_back(v);
	    }
	}
	int t=1;
// 	cout<<prime_factors[15].size();
    // cout<<isvalid(9,15);
	//cin>>t;
	while(t--){
		for(int j=1;j<=200;j++){
		
	    int n=j;
	    //cin>>n;
	    
	    bool flag=false;
	    for(int i=2;i<=n/2;i++){
	        if(isvalid(n,i)){
	           flag=true;
	           break;
	        }
	    }
	    if(flag)
	        outfile<<j<<" "<<"YES"<<endl;
	    else
	        outfile<<j<<" "<<"NO"<<endl;
	}
}
// cout<<5;
	return 0;
}
bool isprime(int n){
	if(n<2)return false;
	if(n%2==0)return(n==2);
	int limit = (int)sqrt((double)n);
	for(int i=3;i<=limit;i+=2){
		if(n%i==0)return false;
	}
	return true;
}
