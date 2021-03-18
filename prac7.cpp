#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include<queue>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
	int N,z;
	cin>>N>>z;
	priority_queue<int> pq;
	while(N--){
	    int k;
	    cin>>k;
	    pq.emplace(k);
	}
	int num=0;
	int max;
	while(z>0){
	    int k=pq.top();
	    z-=k;
	    num+=1;
	    pq.pop();
	    pq.emplace(k/2);
	    max=pq.top();
	    if(max<=0)break;
	}
	if(z<0){
	    cout<<num<<endl;
	}
	else{
	    cout<<"Evacuate"<<endl;
	}
    }
	return 0;
}
