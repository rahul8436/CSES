#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define nl "\n"


void solve() {
    ll y,x;
    cin>>y>>x;
    if(y>x){
        if(y&1){
            y=y-1;
            cout<<y*y+x<<nl;
        }else{
            cout<<y*y-x+1<<nl;
        }
    }else{
        if(x&1){
            cout<<x*x-y+1<<nl;
        }else{
            x=x-1;
            cout<<x*x+y<<nl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    /*int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";*/
    while(t--){
        solve();
    }
}