#include<iostream>
#include<vector>
#include<chrono>
#include<random>
using namespace std;
void swap(double *arr,int i,int j){
	double temp = arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int partition(double arr[],int l,int h,int *p){
	int i=l-1;
	int pivot=h;
	int j = l;
	while(j<=h){
		if(j!=pivot){
			
			*p+=1;
			if(arr[j]<=arr[pivot]){
			i++;
			swap(arr,i,j);
			}
		}
		j++;
	}
	swap(arr,i+1,pivot);
	return i+1;
}
void quicksort(double arr[],int l,int h,int *p){
	if(l<h){
		int i;
		i=partition(arr,l,h,p);
		quicksort(arr,l,i-1,p);
		quicksort(arr,i+1,h,p);
	}
}
int main(){
	
	int n=100000;
	double arr[n];
	int cmp=0;
	int *p=&cmp;
	
  // construct a trivial random generator engine from a time-based seed:
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_real_distribution<double> distribution (0.0,1.0);

  for (int i=0; i<n; ++i)
  arr[i]=distribution(generator);
  cout<<cmp<<' ';
  quicksort(arr,0,n-1,p);
  cout<<cmp<<endl;
  //for(int i=0;i<n;i++)
  //cout<<arr[i]<<' ';
}
