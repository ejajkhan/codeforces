

#include<bits/stdc++.h>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //bokachoda
    int touch;
    scanf("%d",&touch);
    for(int i=0;i<touch;i++){
        int n;
        cin>>n;//thap
         int arr[n];
         int fuch[6000];
         memset(fuch,-1,sizeof(fuch));
         for(int j=0;j<n;j++){
            cin>>arr[j];
         }
         int mark=0;
//zap
         for(int j=0;j<n;j++){
                //cout<<fuch[arr[j]]<<" "<<j<<endl;
              if(fuch[arr[j]]!=-1&&fuch[arr[j]]+1<j){
                mark++;
              }
              if(fuch[arr[j]]==-1){
                fuch[arr[j]]=j;
              }
         }
         if(mark==0){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
            //aka
         }
    }
}

