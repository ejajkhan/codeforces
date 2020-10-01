#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,k,l,b=0,d=0,c;
    l=s.size();
    for(i=0;i<l;i++)
    {
        c=(int)s[i];
        if(c<91){b++;}
        else if(c>91){d++;}
    }

    if(b>d)
    {
        for(i=0;i<l;i++)
        {
            c=(int)s[i];
            if(c>91){c=c-32; s[i]=(char)c;}
        }
    }
    else if(b==d || d>b)
    {
        for(i=0;i<l;i++)
        {
            c=(int)s[i];
            if(c<91){c=c+32; s[i]=(char)c;}
        }
    }

    cout<<s<<endl;

}
