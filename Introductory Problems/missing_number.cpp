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
    ll a[n-1];
    ll sum=0;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll pro=n*(n+1)/2;
    cout<<pro-sum<<nl;
}