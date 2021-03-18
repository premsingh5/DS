#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>&arr){
	cout<<arr.size();
}
int main(){
	vector<int> arr={1,2,3,4};
	vector<int>*p=&arr;
	solve(arr);
	cout<<arr;
}
