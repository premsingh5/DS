#include<iostream>
using namespace std;
int evaluate(int arr[],int n,int x,int idx){
	if(idx==n-2){
		return(arr[n-2]+x*arr[n-1]);
	}
	int ans=0;
	ans+=arr[idx]+x*evaluate(arr,n,x,idx+1);
	return ans;
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	cout<<evaluate(arr,5,1,0);
	
}
