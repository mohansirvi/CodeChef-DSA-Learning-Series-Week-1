//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define MOD 1000000007


void solve()
{
    ll n;
    cin>>n;
    ll cnt = 0;
    for(ll i = 5; n / i >= 1; i *= 5){
        cnt += n / i;
    }
    cout<<cnt<<endl;
}

int main()
{
    fast;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
