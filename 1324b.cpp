

#include<bits/stdc++.h>

using namespace std;

int main()

{
int t,i,j,n,k,s;
vector<int> v;
cin>>t;
while(t--)
{
    cin>>n;
    i=n;
    s=0;
    int a[n];
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>k;
        if(a[k]==0){a[k]=i+1;}
        if(a[k]!=0)
        {
            if((a[k]-(i+1))>1){s=1;break;}
        }
    }
    if(s=0){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}


}

}
