#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define nl "\n"


int main() {
    string s;
    cin>>s;
    ll maxi=1,c=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            c++;
            if(c>maxi)maxi=c;
        }
        else{
            // if(c>maxi)maxi=c;
            c=1;
        }
    }
    cout<<maxi<<nl;
}