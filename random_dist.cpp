#include<iostream>
#include<vector>
#include<chrono>
#include<random>
int N=10;
double arr[N];
static bool isempty=true;
using namespace std;
void swap(double *arr,int i,int j){
	double temp = arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

int partition(double arr[],int l,int h,int *p){
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_int_distribution<int> distribution (l,h);
	int i=l-1;
	//int pivot=distribution(generator);
	//cout<<pivot<<endl;
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
int partition_r(double arr[], int low, int high,int *p)
{
   unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine generator (seed);

  uniform_int_distribution<int> distribution (low,high);
  int random = distribution(generator);
    swap(arr[random], arr[high]);
 
    return partition(arr, low, high,p);
}
void quicksort(double arr[],int l,int h,int *p){
	if(l<h){
		int i;
		i=partition_r(arr,l,h,p);
		quicksort(arr,l,i-1,p);
		quicksort(arr,i+1,h,p);
	}
}
int main(){
	int cmp=0;
	int *p=&cmp;
  for (int i=0; i<n; ++i)
  arr[i]=distribution(generator);
  isempty=false;
  }
  cout<<cmp<<' ';
  const int arr1=
  quicksort(arr,0,n-1,p);
  int mx,nxtmax,min,nxtmin=arr[n-1],arr[n-2],arr[0],arr[1];
  int sc1 = abs(mx-min)+abs()
}
