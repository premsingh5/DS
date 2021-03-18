#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false)
	int n;
	int T;
	cin>>T;
	cin>>n;
	while(T--){
	    	int arr[n+2];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	arr[n]=arr[0];
	arr[n+1]=arr[1];
	for(int i=0;i<n+2;i++)cout<<arr[i]<<' ';
	cout<<endl;
	ll sum=0,slw=0,fst=0,mxsum=0;
	for(int i=0;i<n+2;i++){
		if(i<3){
			sum+=arr[i];
			mxsum=sum;
			continue;
		}
		fst=i;
		slw=i-3;
		sum=sum+arr[fst]-arr[slw];
		if(sum>mxsum)mxsum=sum;
	}
	
	cout<<mxsum<<endl;
	}
}
