
#include <bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 int n;
 cin>>n>>s;
 int zero=count(s.begin(),s.end(),'0');
 int one=count(s.begin(),s.end(),'1');
 int ans=n-(2*min(zero,one));
 cout<<ans<<endl;
 return 0;

}
