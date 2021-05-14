#include<bits/stdc++.h>
#define mod 1e9+7
#define modulo 998244353
using namespace std;

typedef unsigned long long int  ull;
typedef long long int ll;

void read_input_from_file()
{
    #ifndef ONLINE_JUDGE
    freopen("input_file.txt","r",stdin);
    freopen("output_file.txt","w",stdout);
    #endif
}

void shivam()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    read_input_from_file();
    ll t = 1;
    // cin>>t;
    for(ll i=1;i<=t;i++)
    {
        shivam();
    }
    return 0;
}