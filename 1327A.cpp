#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,k;
cin>>t;
while(t--)
{
    cin>>n>>k;
    if(n%2==1 && k%2==0){cout<<"NO"<<endl;}
    else if(n%2==0 && k%2==1){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}

}
}
