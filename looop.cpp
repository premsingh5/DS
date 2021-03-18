#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    for(int i=10;i>0;i--){
        if(N%i==0){cout<<i<<endl;
        break;}
    }
      
}
