#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define nl "\n"


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    ll ans=1;
    ll mod=1e9+7;
    for(int i=0;i<n;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans<<nl;
}