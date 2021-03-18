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

int partition(double arr[],int l,int h){
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_int_distribution<int> distribution (l,h);
	int i=l-1;
	int pivot=distribution(generator);
	int j = l;
	while(j<=h){
		if(j!=pivot){
			
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
void quicksort(double arr[],int l,int h){
	if(l<h){
		int i;
		i=partition(arr,l,h);
		quicksort(arr,l,i-1);
		quicksort(arr,i+1,h);
	}
}
int main(){
	
	int n=10000;
	double arr[n];
	
  // construct a trivial random generator engine from a time-based seed:
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_real_distribution<double> distribution (0.0,1.0);

  for (int i=0; i<n; ++i)
  arr[i]=distribution(generator);
  quicksort(arr,0,n-1);
}
