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
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll maxx = arr[0]*n;
    for(ll i=1;i<n;i++)
    {
        if(arr[i]*(n-i)>maxx){
            maxx=arr[i]*(n-i);
        }
    }
    cout<<maxx<<endl;
}

int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
