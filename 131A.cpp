#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int b=0,k,j,f=0,i;

    cin>>s;
    for( i=0;i<s.size();i++)
    {
        k=(int)s[i];
       if(i==0 && k>96 &&k<123){f=1;}
       if(i==0 && k>64 &&k<91){f=2;}
       if(i>0 && k<91){b++;}

    }

    int l=s.size();
    if(f==1 && b==(l-1))
     {
        for(i=0;i<l;i++)
        {
            if(i==0)
                {
                   k=(int)s[i];
                    k=k-32;
                    s[i]=(char)k;
                }
            else
                {
                    k=(int)s[i];
                    k=k+32;
                    s[i]=(char)k;
                }
        }
      }
    else if(f==2 && b==(l-1))
    {
        for(i=0;i<l;i++)
        {
                    k=(int)s[i];
                    k=k+32;
                    s[i]=(char)k;
        }
    }

    cout<<s<<endl;

}
