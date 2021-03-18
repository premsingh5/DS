#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	vector<int> stack;
	cin>>T;
	while(T--){
		stack.clear();
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	    	if(stack.empty())stack.push_back(arr[i]);
	        else{
	            if(stack.back()>arr[i]){
	            	int l=0;
	            	int r=stack.size()-1;
	                int k=BS(stack,l,r,arr[i]);
	                stack[k]=arr[i];
	            }
	            else{
	                stack.push_back(arr[i]);
	            }
	        }
	          /*int pos=upper_bound(stack.begin(),stack.end(),arr[i])-stack.begin();
	          if(pos==stack.size())stack.push_back(arr[i]);
	          else stack[pos]=arr[i];*/
	        
	        }
		
		cout<<stack.size();
	    for(vector<int>::iterator it=stack.begin();it!=stack.end();it++){
	    	cout<<' '<<*it;
		}
	    cout<<endl;
	    
	}
	
	return 0;
}
