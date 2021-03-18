#include<iostream>
#include<utility>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int,int> P;
struct Order{
	bool operator()(P const &a,P const &b) const{
		return(a.second<b.second ||a.second==b.second && a.first<b.first);
	}
};
int main(){
	priority_queue<P,vector<P>,Order> Q;
	for(int i=0;i<5;i++){
		P p(i,i+5);
		Q.emplace(p);
	}
	while(!Q.empty()){
		cout<<'('<<Q.top().first<<Q.top().second<<')'<<endl;
		Q.pop();
	}
	return 0;
	
}
