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
    for(int i=1;i<=n;i++){
        ll a1=i*i,a2=a1*(a1-1)/2;
        if(n>2){
            a2-=4*(i-1)*(i-2);
        }
        cout<<a2<<nl;
    }
}