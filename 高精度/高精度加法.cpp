#include<bits/stdc++.h>
using namespace std;
int c[10000001];//��¼���������
string a,b;
long long k=0,r=0,i,j;
bool flag;
int main()
{
    cin>>a>>b;//������Ҫ���������ַ���
    if(a.size()<b.size()||a.size()==b.size()&&a<b)//�Ѵ���ַ�����ǰ�棬�������
    {
        swap(a,b);
    }
    for(i=a.size()-1,j=b.size()-1;j>=0;i--,j--)//�����λ��ӣ�������ǵĹ������֣�����j>=0
    {
        c[k++]=(r+a[i]-'0'+b[j]-'0')%10;//����λ���ͽ�λ����Ӻ�ȡ��λ
        r=(r+a[i]-'0'+b[j]-'0')/10;//��¼��λ
    }
    while(i>=0)//�ٰ�ʣ�µļ�����
    {
        c[k++]=(r+a[i]-'0')%10;//λ���ͽ�λ����Ӻ�ȡ��λ
        r=(r+a[i]-'0')/10;//��¼��λ
        i--;
    }
    if(r)c[k++]=r;//������н�λ���������λ
    for(i=k-1;i>=0;i--)//���
    {
        if(c[i]!=0||flag)//��ֹǰ��0����Ĳ���
        {
            cout<<c[i];
            flag=true;
        }
    }
    if(flag==false)cout<<0;//�����û�������˵����ӽ��Ϊ0��Ӧ�����0
    return 0;
}
