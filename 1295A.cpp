#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,j,m;
    string s="";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            m=n/2;
           for(j=0;j<m;j++)
           {
               s=s+"1";
           }
        }
        else if(n%2==1)
        {
            s=s+"7";
            m=n-3;
            m=m/2;
            for(j=0;j<m;j++)
           {
               s=s+"1";
           }

        }

        cout<<s<<endl;
        s="";
    }
}
