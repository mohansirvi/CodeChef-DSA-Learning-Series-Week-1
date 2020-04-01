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

    ll cnt = 1;

    for(ll i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            cnt++;
        }else{
            arr[i]=arr[i-1];
        }
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
