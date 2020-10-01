#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,j,sum,bal;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        int tut=max(a,max(b,c));
        bal=tut-a+tut-b+tut-c;
        cout<<"b= "<<bal<<endl;
        if(bal<tut)
        {
            cout<<"NO"<<endl;
        }
        else if(bal==tut)
        {
            cout<<"YES"<<endl;
        }
        else if(bal>tut)
        {
            bal=bal-tut;
            if(bal%3==0)
            {
                cout<<"YES"<<endl;
            }
            else if(bal%3==1)
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
