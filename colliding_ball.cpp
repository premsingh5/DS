#include<iostream>
using namespace std;
#include<list>
#include<bits/stdc++.h>
typedef pair<int,double> P;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	list<P> red,blue;
	for(int i=0;i<n;i++){
		int x;
		double vy;
		cin>>x>>vy;
		red.push_back(P(x,vy));
	}
	for(int j=0;j<m;j++){
		int y;
		double vx;
		cin>>y>>vx;
		blue.push_back(P(y,vx));
	}
	int nc=0;
	bool ncol=false;
	list<P>::iterator itb=blue.begin();
	while(!ncol){
		double time=INT_MAX;
		list<P>::iterator l;
		if(red.empty() || blue.empty()){
			ncol==true;
			break;
		}
		for(list<P>::iterator it=red.begin();it!=red.end();it++){
			double k1,k2;
			k1=(*itb).first / (*it).second;
			k2=(*it).first/ (*itb).second;
			if(k1==k2){
				if(k1<time){
					time = k1;
					l=it;
				}
			}
		}
		if(time!=INT_MAX){
			red.erase(l);
			itb=blue.erase(itb);
			nc+=1;
		}
		else{
			itb=blue.erase(itb);
		}
	}

}
