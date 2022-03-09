#include<bits/stdc++.h>
using namespace std;
int c[10000001];//记录结果的数组
string a,b;
long long k=0,r=0,i,j;
bool flag;
int main()
{
    cin>>a>>b;//输入需要做操作的字符串
    if(a.size()<b.size()||a.size()==b.size()&&a<b)//把大的字符串放前面，方便操作
    {
        swap(a,b);
    }
    for(i=a.size()-1,j=b.size()-1;j>=0;i--,j--)//从最低位相加，相加他们的公共部分，所以j>=0
    {
        c[k++]=(r+a[i]-'0'+b[j]-'0')%10;//两个位数和进位的相加后取个位
        r=(r+a[i]-'0'+b[j]-'0')/10;//记录进位
    }
    while(i>=0)//再把剩下的继续加
    {
        c[k++]=(r+a[i]-'0')%10;//位数和进位的相加后取个位
        r=(r+a[i]-'0')/10;//记录进位
        i--;
    }
    if(r)c[k++]=r;//如果还有进位，进到最高位
    for(i=k-1;i>=0;i--)//输出
    {
        if(c[i]!=0||flag)//防止前导0输出的操作
        {
            cout<<c[i];
            flag=true;
        }
    }
    if(flag==false)cout<<0;//如果都没有输出，说明相加结果为0，应当输出0
    return 0;
}
