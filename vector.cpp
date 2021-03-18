#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int BS(vector<int> stack,int l,int r,int x){
    if(r>=l){
    	int m = l+(r-l)/2;
        if(stack[m]==x)return m+1; 
        if(stack[m]>x)return BS(stack,l,m-1,x);
        if(stack[m]<x)return BS(stack,m+1,r,x);
    }
    return l;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int> stack;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		stack.push_back(k);
	}
	int l=0;
	int r=stack.size()-1;
	cout<<BS(stack,l,r,3);
}
