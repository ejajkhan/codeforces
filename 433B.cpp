#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int n,t,i,j,k,a,b,m,type,l,r,s=0,result;

scanf("%lld",&n);
int v[n],u[n],c[n];
c[0]=0;

for(i=0;i<n;i++)
{
    scanf("%lld",&v[i]);
    u[i]=v[i];
    if(i==0){c[i]=v[i];}
    else if(i>0){c[i]=c[i-1]+v[i];}


}

sort(u, u+n);
scanf("%lld",&m);
for(i=0;i<m;i++)
{
    //cin>>type>>l>>r;
    scanf("%lld %lld %lld", &type, &l, &r);
    s=0;

    if(type==1)
    {
       result=c[r-1]-c[l-1];
       printf("%lld\n",result);
       cout<<result<<endl;
    }
    else
    {
        for(j=l-1;j<r;j++)
       {
           s=s+u[j];


       }
       printf("%lld\n",s);
    }

}

}
