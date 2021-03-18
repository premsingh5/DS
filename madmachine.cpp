#include <iostream>
using namespace std;
void solve(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int tokens=0,smallest=N+1,largest;
    for(int i=0;i<N;i++){
        if(arr[i]==0 && i<smallest)smallest=i+1;
    }
    largest=smallest-1;
    while(smallest>0){
        tokens+=largest;
    for(int i=0;i<N;i++){
        arr[i]-=1;
        if(arr[i]==0 && i<smallest)smallest=i+1;
    }
    largest=smallest-1;
    
    }
    cout<<tokens<<endl;
}

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    solve();
	}
	return 0;
}

