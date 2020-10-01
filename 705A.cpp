#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    int l=s.size();
    for(i=2;i<l;i++)
    {
        if(s[i]=='B' && s[i-1]=='U' && s[i-2]=='W')
        {
            s[i]='1';
            s[i-1]='1';
            s[i-2]='1';
        }
    }
    int f=0;
    for(i=0;i<l;i++)
    {

        if(s[i]!='1' && s[i-1]=='1' && s[i-2]=='1' && s[i-3]=='1' && f==1)
        {
            cout<<" ";
        }
        if(s[i]!='1')
        {
            cout<<s[i];
            f=1;
        }
    }
    cout<<endl;



}
