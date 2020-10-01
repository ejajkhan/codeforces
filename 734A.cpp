#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,h,a=0,d=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>d;
        a++;

        if(d>m){a++;}
    }
    cout<<a<<endl;

}
