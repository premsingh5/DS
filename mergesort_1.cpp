#include<iostream>
#include<chrono>
#include<random>
using namespace std;
void merge(double a[],int l,int m,int r,int *p){
	int n1=m-l+1;
	int n2=r-m;
	double L[n1],R[n2];
	for(int i=0;i<n1;i++){
		L[i]=a[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i]=a[m+1+i];
	}
	int k=l;
	int i=0;
	int j=0;
	while(i<n1 && j<n2){
		//*p+=1;
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}else{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=R[j];
		j++;
		k++;
	}
	
}
void mergesort(double a[],int l,int r,int *p){
	if(l>=r){
		return;
	}
	int m=l+(r-l)/2;
	mergesort(a,l,m,p);
	mergesort(a,m+1,r,p);
	merge(a,l,m,r,p);
	
}

int main(){
	int  n=100000;
	int cmp=0;
	int *p=&cmp;
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_real_distribution<double> distribution (0.0,1.0);
	double arr[n];
  for (int i=0; i<n; ++i)
  arr[i]=distribution(generator);
	//int v=0;
	//for(int i=0;i<n;i++)
	//cout<<arr[i]<<' ';
	//cout<<endl;
	mergesort(arr,0,n-1,p);
	//for(int i=0;i<n;i++)
	//cout<<arr[i]<<' ';
	//cout<<cmp;
}
