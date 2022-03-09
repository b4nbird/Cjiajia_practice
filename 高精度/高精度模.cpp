#include<bits/stdc++.h>
using namespace std;
string s;
long long k=0,a,b,i;
bool flag;
int main()
{
    cin>>s>>b;//输入被除数和除数
    for(int i=0;i<s.size();i++)//从高位开始，一位一位向低位
    {
        a=a*10+s[i]-'0';//加上被除数的这一位
        a%=b;//一直取余
    }
    cout<<a;
    return 0;
}
