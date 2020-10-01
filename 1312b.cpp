#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,n,i,j,m;




   cin>>t;
   for(j=0;j<t;j++)
   {

       cin>>n;
       vector<int> v;

       for(i=0;i<n;i++)
         {
            cin>>m;
            v.push_back(m);

         }
       sort(v.rbegin(),v.rend());
       for(i=0;i<n;i++)
         {
           cout<<v[i]<<" ";
         }
       cout<<endl;



   }


}
