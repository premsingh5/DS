#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r,int *v){
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++){
		L[i]=a[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i]=a[m+1+i];
	}
	int k=l;
	int i=0;
	int j=0;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}else{
			a[k]=R[j];
			j++;
			*v+=n1-i;
			
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=R[j];
		j++;
		k++;
	}
	
}
void mergesort(int a[],int l,int r,int *v){
	if(l>=r){
		return;
	}
	int m=l+(r-l)/2;
	mergesort(a,l,m,v);
	mergesort(a,m+1,r,v);
	merge(a,l,m,r,v);
	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int v=0;
	mergesort(arr,0,n-1,&v);
	int s=2*(arr[n-1]-arr[0]);
	cout<<s<<endl;
	}
	//cout<<(v)<<endl;
}
