#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int x=s.size();
        if((x%2)==0)
        {
            string s1=s.substr(0,x/2);
            string s2=s.substr(x/2);
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl; 
        }
        else
        {
            string s1=s.substr(0,x/2);
            string s2=s.substr((x/2)+1);
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}