#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Pair 
{
    int min;
    int max;
}; 
 
struct Pair getMinMax(ll arr[], int n)
{
    struct Pair minmax;     
    int i;
     
    // If there is only one element 
    // then return it as min and max both
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];     
        return minmax;
    } 
     
    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1]) 
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } 
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    } 
     
    for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)     
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)     
            minmax.min = arr[i];
    }
    return minmax;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
	int n;
	cin>>n;
	if(n>=3){
			ll arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	struct Pair minmax = getMinMax(arr, n);
     
    cout <<2*(minmax.max-minmax.min)<<endl;
          }
	}
     return 0;
	//cout<<(v)<<endl;
}
