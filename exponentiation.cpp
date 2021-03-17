#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main(){
	ll a;
	ll b;
	ll a1=2;
	ll b1=45;
	//cout<<binpow(a1,b1);
	cout<<pow(2,45);
	
}
