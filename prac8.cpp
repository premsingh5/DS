#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked

using namespace std;

void scanint(long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
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
	int a,b;
	long c;
	vector <long> d;
	cin >> a;
	while(a--){
		d.clear();
		cin >> b >> c;
		d.push_back(c);
		while(b>1){
			int k=d.size()-1;
			b--;
			scanint(c);
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
		}
		cout << d.size() << " ";
		for(int i=0;i<d.size();i++){
			printf("%li ",d[i]);
		}
		cout << endl;
	}
}
