#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void printer(string s,int n,int space,int len)
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        Sleep(100);
    }

    for(int i=0;i<space;i++)
    {
        cout<<"\t";
        Sleep(100);
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
        if(len==0){Sleep(50);}
        else{Sleep(200);}

    }
}
void loading()
{
    int i;
    Sleep(1000);
    cout<<endl;
    for(i=0;i<10;i++)

    {
        cout<<". ";
        Sleep(250);

    }
    cout<<endl;
}
int main()
{
    string s,name="Corona Anti-virus\n\n",load="\nLoading",start="\nCorona Anti-virus Started";
    string scan="\nScanning for Corona Virus in Your PC",detect="\nCorona Virus Detected";
    string ask="\nDo you want to remove Corona virus (YES/NO)\n==>> ";
    string being="\nCorona virus is being removed\n",been="\nCorona virus has been removed\n",welcome="\n\n\n\t\t\t\t\tYou are welcome\n";
    printer(name,3,5,1);
    printer(load,0,0,0);
     loading();
    printer(start,0,0,0);


    printer(scan,1,0,0);
    loading();
    printer(detect,0,0,0);
    Sleep(1000);
    printer(ask,1,0,0);

    cin>>s;
    Sleep(1000);
    if(s=="YES" || s=="yes"){
        printer(being,0,0,0);
        loading();
        printer(been,0,0,0);
        Sleep(1000);
        printer(welcome,0,0,1);
        cout<<endl<<endl;

    }

}
