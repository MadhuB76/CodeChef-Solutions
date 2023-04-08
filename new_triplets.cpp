#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;;
    while (t--){
        int m;
        cin>>m;
        int ten;
        int flag=0;
        for(int i=2;i*i<m;i++){
            if(m%i==0){
                ten=i;
                flag=1;
            }
            if(flag==1){
                break;
            }
        }
        if(flag==0){
            cout<<-1<<endl;
            continue;
        }
        int ten2=m/ten;
        cout<<ten<<" "<<ten2<<" "<<1<<endl;
}
return 0;
}