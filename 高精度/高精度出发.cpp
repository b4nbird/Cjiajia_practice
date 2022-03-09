#include<bits/stdc++.h>
using namespace std;
int c[10000001];//记录结果的数组
string s;
long long k=0,a,b,i;
bool flag;
int main()
{
    cin>>s>>b;//输入被除数和除数
    for(int i=0;i<s.size();i++)//从高位开始，一位一位向低位
    {
        a=a*10+s[i]-'0';//加上被除数的这一位
        c[k++]=a/b;
        a%=b;//除完了
    }
    for(i=0;i<k;i++)//因为是从高位到低位，所以要反着输出
    {
        if(c[i]!=0||flag)//防止前导0输出的操作
        {
            cout<<c[i];
            flag=true;
        }
    }
    if(flag==false)cout<<1;//如果都没有输出，说明相减结果为1，应当输出1
    return 0;
}
