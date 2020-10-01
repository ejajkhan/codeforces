

#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,i,j,k,l,t,a,e=0;
vector<int> v;
cin>>t;
while(t--)
{
    cin>>n;
    i=n;
    a=0;e=0;
    while(i--)
    {
        cin>>k;
        if(k%2==0){e=1;}
        if(k%2==1){a=1;}
    }
    if(e==1 && a==1){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}
}
}
