#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int sff=0,pff=0,cmb_val=INT_MAX,cmb;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sff+=arr[i];
		}
		for(int i=0;i<n;i++){
			pff+=arr[i];
			if(i>0)sff-=arr[i-1];
			//cout<<pff<<' '<<sff<<endl;
			int cmb1=sff+pff;
			if(cmb1<cmb_val){
				cmb_val=cmb1;
				cmb=i;
			}
		}
		cout<<cmb+1<<endl;
	}
	
}
