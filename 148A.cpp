#include<bits/stdc++.h>


using namespace std;

int main()
{
  int i,j,k;
  string s1,s2,s3,s4="0",s5="1";
  cin>>s1>>s2;
  k=s1.size();
  for(i=0;i<k;i++)
  {
      if(s1[i]==s2[i])
      {
          s3=s3+s4;
      }
      else{
        s3=s3+s5;
      }
  }
  cout<<s3<<endl;

}
