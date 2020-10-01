
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fast;
    long long int n,m,q,i,j,k,tut;
    cin>>n;
    ll arr[n+5];
    ll mx=-1;ll mn=1e9;ll cnt=0;


    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];//arr.push_back(k);
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    if(n==1&&mx>=0){cout<<mx<<endl;return 0;}
    if(n==1&&mx<=0){cout<<-1<<endl;return 0;}

     for(ll i=0;i<=n;i++)if(n!=2)if(arr[i]==mn || arr[i]==mx)cnt++;
      if(cnt==n){if(mx-mn<(mx+mn+1)/2)cout<<mx-mn<<endl;
      else cout<<(mx-mn)/2<<endl;return 0;}
      ll mid=mx+mn;
    mid/=2;
    ll lev=mid;
    mid-=mn;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i]<lev)arr[i]+=mid;
        else if(arr[i]>lev)arr[i]-=mid;
        else continue;
    }
    ll c=-1;
     for(ll i=1;i<=n;i++)
    {
        if(arr[i]!=lev){c=100;break;}
    }
    c==100?cout<<-1<<endl:cout<<mid;

}
