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
    ll a[n];
    ll minc=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            minc+=abs(a[i]-a[i-1]);
            a[i]=a[i]+(abs(a[i]-a[i-1]));
        }
    }
    cout<<minc<<nl;
}