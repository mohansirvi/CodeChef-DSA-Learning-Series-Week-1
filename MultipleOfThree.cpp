//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define MOD 1000000007


void solve()
{
    ll k;
	int d0, d1, tmp;
	cin>>k>>d0>>d1;
	tmp = d0 + d1;

	ll ans = tmp;
	ll sum = (2*tmp) % 10 + (4*tmp) % 10 + (8*tmp) % 10 + (6*tmp) % 10;

	k -= 2;

	if(k > 0) {
		ans += (tmp % 10);
		k--;
	}

	ans += (k / 4) * sum;

	k %= 4;

	int p = 2;
	while(k--) {
		ans += (p*tmp) % 10;
		p = (p * 2) % 10;
	}

	if((ans % 3) == 0){
        cout<<"YES"<<endl;
    }
	else{
        cout<<"NO"<<endl;
    }
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
