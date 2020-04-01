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
    ll rev_n= 0;
    while(n > 0)
    {
        rev_n= rev_n*10 + n%10;
        n = n/10;
    }
    cout<<rev_n<<endl;

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
