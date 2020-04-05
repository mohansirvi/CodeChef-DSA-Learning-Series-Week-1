//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define MOD 1000000007


void solve()
{
    ll g;
    cin>>g;
    while(g--){
    ll cnt = 0;
    ll I,N,Q;
    cin>>I>>N>>Q;

    if(I==1){
        if(Q==1){
            if(N%2==0){
                cout<<N/2<<endl;
            }else{
                cout<<N/2<<endl;
            }
        }else{
            if(N%2==0){
                cout<<N/2<<endl;
            }else{
                cout<<N/2+1<<endl;
            }
        }
    }else{
        if(Q==1){
            if(N%2==0){
                cout<<N/2<<endl;
            }else{
                cout<<N/2+1<<endl;
            }
        }else{
            if(N%2==0){
                cout<<N/2<<endl;
            }else{
                cout<<N/2<<endl;
            }
        }
    }
    }
}

int main()
{
    fast;
    int t=1;
    //number of test cases
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
