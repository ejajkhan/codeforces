#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,s=1,tut,temp=1;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    for(i=0;i<n;i++)
    {
        if(i>0)
        {
            if(v[i]>v[i-1] || v[i]==v[i-1])
            {
                temp++;
            }
            if(temp>s){s=temp;}
            if(v[i]<v[i-1])
            {
                temp=1;
            }

        }

    }
    cout<<s<<endl;

}
