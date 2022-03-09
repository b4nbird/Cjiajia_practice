#include<bits/stdc++.h>
using namespace std;
string a,b;
int k;
int c[1000001];
int main()
{
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            c[i+j]+=(a[i]-48)*(b[j]-48);
        }
    }
    for(k=0;k<=a.size()+b.size();k++)
        c[k]+=c[k-1]/10,c[k-1]%=10;
    while(!c[k]&&k>=1)k--;
    for(;k>=0;k--)
        cout<<c[k];
    return 0;
}
