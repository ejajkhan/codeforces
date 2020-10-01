
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<long long int>v;
     int t1;
     /*
     rg
     rgrg
     rg
     g
     */
     cin>>t1;
     while(t1--){
        int n,k;
        long long int val;
         vector<int>v(1000,0);
        cin>>n>>k;
        int mark=1;
        for(int i=0;i<n;i++){
            cin>>val;
            int h=0;
            while(val!=0){
                if(val%k>1){
                    mark=0;
                }
                //out<<val/k<<" "<<val%k<<endl;
                v[h]+=val%k;
                val/=k;
                h++;
            }
        }
        sort(v.rbegin(),v.rend());
        if(mark==1&&v[0]<2){
            cout<<"YES"<<endl;
        }
        else{
               // cout<<v[0]<<" "<<mark<<" ";
            cout<<"NO"<<endl;
        }
     }
     /*
     grg
     rg
     rg
     */
}
