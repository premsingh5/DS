#include<iostream>
#include<complex>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
using cd = complex<double>;
const double PI = acos(-1);
void fft(vector<cd> &a,bool invert){
	int n = a.size();
	if(n==1)return ;
	vector<cd> even(n/2),odd(n/2);
	for(int i=0;2*i<n;i++){
		even[i]=a[2*i];
		odd[i]=a[2*i+1];
	}
	fft(even,invert);
	fft(odd,invert);
	double ang = 2*PI/n*(invert ? -1 : 1);
	cd w(1),wn(cos(ang),sin(ang));
	for(int i=0;2*i<n;i++){
		a[i] = even[i]+w*odd[i];
		a[i+n/2] = even[i]-w*odd[i];
		if(invert){
			a[i]/=2;
			a[i+n/2]/=2;
		}
		w=w*wn;
		
	}
}
vector<int> multiply(vector<int> &a,vector<int> &b){
	vector<cd> fa(a.begin(),a.end()),fb(b.begin(),b.end());
	int n=1;
	while (n<fa.size()+fb.size())
	n<<=1;
	fa.resize(n);
	fb.resize(n);
	fft(fa,false);
	fft(fb,false);
	for(int i=0;i<n;i++){
		fa[i]*=fb[i];
	}
	fft(fa,true);
	vector<int> result(n);
	for(int i=0;i<n;i++){
		result[i]=round(fa[i].real());
	}
	return result;
}
int main() {
	    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int L,R;
        cin>>L>>R;
        int count=0;
        int n=R-L+1;
        vector<int>arr(n);
        vector<int> arr1(n);
        for(int i=L;i<=R;i++){
            arr[i-L]=i;
            arr1[i-L]=i;
        }
        vector<int>c =multiply(arr,arr1);
        for(int i=0;i<c.size();i++){
            if(c[i]!=0)count+=1;
        }
        cout<<count<<endl;
      
        
    }
	return 0;
}
