#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int N,A,B,K;
		cin>>N>>A>>B>>K;
		int task=0;
		for(int p=A;p<=N;p+=p){
			if(p%3!=0)task+=1;
		}
		for(int p=B;p<=N;p+=p){
			if(p%2!=0)task+=1;
		}
		if(task>=K)cout<<"Win";
		else cout<<"Lose";
	}
}
