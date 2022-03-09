#include<bits/stdc++.h>
using namespace std;
int c[10000001];//记录结果的数组
string a,b;
long long k=0,r=0,i,j;
bool flag;
int main()
{
    cin>>a>>b;//输入需要做操作的字符串
    if(a.size()<b.size()||a.size()==b.size()&&a<b)//把大的字符串放前面，方便操作 ,还要判断相减是否为负数
    {
        cout<<"-";
        swap(a,b);
    }
    for(i=a.size()-1,j=b.size()-1;j>=0;i--,j--)
    {
        c[k++]=(a[i]-b[j]-r);//两个位数相减再减去接的位数
        r=0;//清零标记
        if(c[k-1]<0){c[k-1]+=10;r=1;}//如果是负数就借十，并标记
    }
    while(i>=0)//剩下的继续减
    {
        c[k++]=(a[i]-'0'-r);//减去借的
        r=0;//清零标记
        if(c[k-1]<0){c[k-1]+=10;r=1;}//如果是负数就借十，并标记
        i--;
    }
    for(i=k-1;i>=0;i--)//输出
    {
        if(c[i]!=0||flag)//防止前导0输出的操作
        {
            cout<<c[i];
            flag=true;
        }
    }
    if(flag==false)cout<<0;//如果都没有输出，说明相减结果为0，应当输出0
    return 0;
}
