// You are given two integers 𝑙 and 𝑟, 𝑙≤𝑟. Find the largest possible value of 𝑎mod𝑏 over all pairs (𝑎,𝑏) of integers for which 𝑟≥𝑎≥𝑏≥𝑙.
// As a reminder, 𝑎mod𝑏 is a remainder we get when dividing 𝑎 by 𝑏. For example, 26mod8=2.




#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll solve(ll l,ll r){
    
    ll _max = r+1;
    ll half = (r + l) /2 ;
    for(ll i =l;i<=r/2;i++){
        if(r % i> _max) _max = i % l;
    }

    return _max;
}



int main(){

    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        cout<<solve(l,r)<<endl;
    }

    return 0;
}

