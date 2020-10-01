#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=30,i,h,d=0,j,k,f=0;
    int a[8] ={1,3,5,7,9,11,13,15};
    int b[8]={1,3,5,7,9,11,13,15};
    int c[8]={1,3,5,7,9,11,13,15};
    cin>>n;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            h=0;
            for(k=0;k<8;k++)
            {
                h=a[i]+b[j]+c[k];
                //cout<<h<<" = "<<a[i]<<" + "<<b[j]<<" + "<<c[k]<<endl;
                if(h==n)
                    {

                         d=1;
                         f++;
                    }

            }
        }
    }
    if(d==0)
        {
            cout<<"can not be equal"<<endl;

        }
    else if(d==1)
        {
            cout<<"equal"<<endl<<"count : "<<f<<endl;
        }

}
