#include <bits/stdc++.h>
 using namespace std;
# define ll long long int
 #define ld long double
 #define str string
 #define F first
 #define S second
 #define all(x) begin(x), end(x)
 #define pb push_back
 #define mp make_pair
 const int mxN=1e5;
 int n, mh, mm, st1, st2, et1, et2;
 char c;
 string mt, mt1, mt2;
 bool timeCount() {
     bool a=false, b=false;
     if(st1==et1 && st2==et2 && mh==st1 && mm==st2)return true;
     if(mh>=st1) {
         if(mh==st1 && mm>=st2)a=true;
         else if(mh>st1)a=true;
         if(et1>st1) {
             if(mh<et1)b=true;
             else if(mh==et1 && mm<=et2)b=true;
         } else if(et1==st1) {
             if(et2<st2)b=true;
             else if(et2>st2 && mh==et1 && mm<=et2)b=true;
         } else {
             b=true;
         }
     } else {
         if(mh<et1)a=true;
         else if(mh==et1 && mm<=et2)a=true;
         if(et1>st1) {
             return false;
         } else if(et1==st1) {
             if(et2>st2)return false;
             else if(et2<st2 && mh==et1 && mm<=et2)b=true;
         } else {
             if(mh<et1)b=true;
             else if(mh==et1 && mm<=et2)b=true;
         }
     }
     return a&&b;
 }
 void timeConvert() {
     if(mt1=="AM") {
         if(st1==12)st1=0;
     } else {
         if(st1!=12)st1+=12;
     }
     if(mt2=="AM") {
         if(et1==12)et1=0;
     } else {
         if(et1!=12)et1+=12;
     }
 }
 void solve() {
     cin >> mh >> c >> mm >> mt >> n;
     if(mt=="AM") {
         if(mh==12)mh=0;
     } else { 
         if(mh!=12)mh+=12;
     }
     for(int i=0;i<n;i++) {
         cin >> st1 >> c >> st2 >> mt1 >> et1 >> c >> et2 >> mt2;
         timeConvert();
         if(timeCount())cout << '1';
         else cout << '0';
     }
     cout << "\n";
 }
 int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t; 
     cin >> t; 
     while(t--) {     
             solve(); 
     } 
     return 0;
 }
