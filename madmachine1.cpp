#include <bits/stdc++.h>
#define gc getchar_unlocked
#define ll long long int
using namespace std;
inline int input()
{
 register int c = getchar_unlocked();
  int x=0;
  for(;c<'0'||c>'9';c=gc());
  for(;c>='0'&&c<='9';c=gc())
  {
   x=(x<<1)+(x<<3)+c-'0'; 
  }
  return x;
}


int *findMinAndPos(int curr[],int max[],int start,int end) {
  int min = INT_MAX;
  int minPos = -1;
  int current;
  for(int i = start;i<end;i++) {
    current = max[i]-curr[i];
    if(current<=min) {
      min = current;
      minPos = i;
    }
  }
  
  int *res = (int *)malloc(2*sizeof(int));
  res[0] = minPos;
  res[1] = min;
  return res;
}

int main() {
  int t = input();
  int *arr;
  int n;
  int curr;
  while(t--) {
    int min = INT_MAX;
    n = input();
    long sum = 0;
    for(int i = 0;i<n;i++) {
      curr = input();
      if(curr<min) {
        min = curr;
      }
      sum += min;
    }
    cout << sum <<'\n';
  }
	return 0;
}
