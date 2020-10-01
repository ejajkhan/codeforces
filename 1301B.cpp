#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    long long int n,i,j,k,b=-2,s=9999999999999,tut,f=0,t;


    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>t;
        f=0;
        long long int a[t];

        for(i=0;i<t;i++)
        {
            cin>>a[i];
            k=a[i];
            if(k==(-1) &&i>0 && a[i-1]!=(-1))
            {
                if(a[i-1]>b){b=a[i-1];}
                if(a[i-1]<s){s=a[i-1];}
                f=1;

            }
            if(a[i-1]==(-1) && i<t && a[i]!=(-1) )
            {
                if(a[i]>b){b=a[i];}
                if(a[i]<s){s=a[i];}
                f=1;

            }

        }


        tut=(b-s)/2;

        for(i=0;i<t;i++)
        {
            if(a[i]==-1)
            {
                a[i]=tut;
            }
        }
        s=-1;
        for(i=1;i<t;i++)
        {
           b=a[i]-a[i-1];
           if(b>s){s=b;}


        }
        if(f==1){
            cout<<s<<" "<<tut<<endl;
        }
        else{
            cout<<"0 0"<<endl;
        }







    }



}
