#include <bits/stdc++.h>
using namespace std;  
void solve(){
int a,b,c ;
cin >> a >> b >> c  ; 
for(int k = 2 ; k <= 100 ; k++){
  if(a%k != 0 ){
    if( b%k != 0){
      if( c%k!=0){
    cout << k << endl ; 
    return ; 
      }
    }
  }
}
}
int main(){
 
  int t;
  cin>>t;
  while(t--){
    solve();
}
return 0;
}