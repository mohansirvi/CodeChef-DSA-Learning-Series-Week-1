//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL)
#define MOD 1000000007


void solve()
{
    int act;
    string s;
    cin>>act>>s;
    int red = 0;
    if(s=="INDIAN"){
        red = 200;
    }else{
        red = 400;
    }
    int tot_laddu = 0;
    while(act--){
        string str;
        cin>>str;
        if(str=="CONTEST_WON"){
            tot_laddu+=300;
            int k;
            cin>>k;
            if(k<=20){
                tot_laddu+=(20-k);
            }
        }
        if(str=="BUG_FOUND"){
             int k;
            cin>>k;
            tot_laddu+=k;

        }
        if(str=="TOP_CONTRIBUTOR"){
            tot_laddu+=300;

        }
        if(str=="CONTEST_HOSTED"){
            tot_laddu+=50;
        }
    }
    cout<<tot_laddu/red<<endl;
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

