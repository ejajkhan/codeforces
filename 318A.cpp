#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,h,a=0,d=0,k;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


}
