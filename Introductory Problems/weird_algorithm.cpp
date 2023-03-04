#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define nl "\n"




int main() {
    ll n;
    cin>>n;
    while(n>1){
        cout<<n<<" ";
        if(!(n&1))n/=2;
        else{
            n=n*3+1;
        }
        // cout<<nl;
    }
    cout<<1<<nl;
}