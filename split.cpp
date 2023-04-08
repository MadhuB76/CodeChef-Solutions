#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int num;
        int count=0;
        cin>>num;
        string str = to_string(num);
        for(int i=0;i<=str.size();i++){
            if(str[i]=='7'){
               count++; 
            }
        }
        if(count>=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}