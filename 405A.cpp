#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,h,a=0,d=0,k;
    cin>>n;
    string s="",first,second,inter,last;
    first="I hate ";
    second="I love ";
    inter="that ";
    last="it";
    for(i=1;i<=n;i++)
    {
        if(i%2==1){s=s+first;}
        else if(i%2==0){s=s+second;}
        int a=10;
        if(i!=n){s=s+inter;}
    }
    s=s+last;
    cout<<s<<endl;


}
