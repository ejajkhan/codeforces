#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m;
    float a,b,r,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=a;m=b;
        if(n%m==0)
        {
            cout<<"0"<<endl;
        }
        else{
            r=((int)(a/b));
            d=((r+1)*b);
            cout<<d-a<<endl;

        }
    }
}
