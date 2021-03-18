#include<iostream>
using namespace std;
void solve(int *p){
	*p+=10;
}
int main(){
	int p=0;
	int *k=&p;
	cout<<p<<' ';
	solve(k);
	cout<<p;
}
