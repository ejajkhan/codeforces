#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        
    }

    if(n<3)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
    {
        n=n-2;
        if(n%m==0){i=n/m+1;}
        else{i=n/m+2;}
    }

    cout<<i<<endl;

}