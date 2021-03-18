#include<iostream>
#include<math.h>
typedef long long int ll;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n=10000000000;
	//cin>>n;
	ll a=sqrt(n),count=0;
	while(a){
		int b=n-a*a;
		if(b>=700){
			count+= a*700;
			break;
		}
		else if(b>0)count+=b;
		a--;
	}
	cout<<count<<endl;
}
