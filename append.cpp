#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,y;
        cin>>n>>y;
        int sol=0;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<n;i++){
            sol=sol|array[i];
        }
        int result = y-sol;
        if((result&y)==result){
            cout<<result<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
return 0;
}