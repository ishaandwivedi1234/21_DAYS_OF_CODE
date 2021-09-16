#include<bits/stdc++.h>
using namespace std;

void solve(char *a,int n){
    for(int i=0;i<n;i++){
        if(a[i] == 'U') cout<<'D';
        else if(a[i] == 'D') cout<<'U';
        else if(a[i] == 'L') cout<<'L';
        else if(a[i] == 'R') cout<<'R';
    }
}
int main(){

     int t;
     cin>>t;
     while(t--){

         int n;
         cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
            cin>> a[i];
        solve(a,n);
        cout<<"\n";
        

     }



    return 0;
}