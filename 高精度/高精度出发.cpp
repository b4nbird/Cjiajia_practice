#include<bits/stdc++.h>
using namespace std;
int c[10000001];//��¼���������
string s;
long long k=0,a,b,i;
bool flag;
int main()
{
    cin>>s>>b;//���뱻�����ͳ���
    for(int i=0;i<s.size();i++)//�Ӹ�λ��ʼ��һλһλ���λ
    {
        a=a*10+s[i]-'0';//���ϱ���������һλ
        c[k++]=a/b;
        a%=b;//������
    }
    for(i=0;i<k;i++)//��Ϊ�ǴӸ�λ����λ������Ҫ�������
    {
        if(c[i]!=0||flag)//��ֹǰ��0����Ĳ���
        {
            cout<<c[i];
            flag=true;
        }
    }
    if(flag==false)cout<<1;//�����û�������˵��������Ϊ1��Ӧ�����1
    return 0;
}
