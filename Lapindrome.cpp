//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define MOD 1000000007


void solve()
{
    string s;
    cin>>s;
    ll n = s.length();

    int arr[26] = {0};
    int brr[26] = {0};

    if(n&1){

    for(ll i=0;i<(n)/2;i++){
        arr[s[i]-'a']++;
    }
    for(ll i=n-1;i>(n)/2;i--){
        brr[s[i]-'a']++;
    }

    }else{
        for(ll i=0;i<(n)/2;i++){
            arr[s[i]-'a']++;
        }
        for(ll i=n-1;i>=(n)/2;i--){
            brr[s[i]-'a']++;
        }
    }

    int cnt = 0;
    for(int i=0;i<26;i++){
        if(arr[i]==brr[i]){
            cnt++;
        }
    }

    if(cnt==26){
        cout<<"YES"<<endl;
    }else{
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
