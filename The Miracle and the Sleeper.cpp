// You are given two integers ð and ð, ðâ¤ð. Find the largest possible value of ðmodð over all pairs (ð,ð) of integers for which ðâ¥ðâ¥ðâ¥ð.
// As a reminder, ðmodð is a remainder we get when dividing ð by ð. For example, 26mod8=2.




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

