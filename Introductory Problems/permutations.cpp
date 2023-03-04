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
    if(n==1)cout<<1<<nl;
    else if(n==2 || n==3)cout<<"NO SOLUTION"<<nl;
    else if(n==4)cout<<"2 4 1 3"<<nl;
    else{
        if(n&1){
            for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
            }
            for(int i=2;i<n;i+=2){
                cout<<i<<" ";
            }
        }else{
            for(int i=1;i<n;i+=2){
            cout<<i<<" ";
            }
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
        }
        
    }
}