#include<bits/stdc++.h>
using namespace std;
int c[10000001];//��¼���������
string a,b;
long long k=0,r=0,i,j;
bool flag;
int main()
{
    cin>>a>>b;//������Ҫ���������ַ���
    if(a.size()<b.size()||a.size()==b.size()&&a<b)//�Ѵ���ַ�����ǰ�棬������� ,��Ҫ�ж�����Ƿ�Ϊ����
    {
        cout<<"-";
        swap(a,b);
    }
    for(i=a.size()-1,j=b.size()-1;j>=0;i--,j--)
    {
        c[k++]=(a[i]-b[j]-r);//����λ������ټ�ȥ�ӵ�λ��
        r=0;//������
        if(c[k-1]<0){c[k-1]+=10;r=1;}//����Ǹ����ͽ�ʮ�������
    }
    while(i>=0)//ʣ�µļ�����
    {
        c[k++]=(a[i]-'0'-r);//��ȥ���
        r=0;//������
        if(c[k-1]<0){c[k-1]+=10;r=1;}//����Ǹ����ͽ�ʮ�������
        i--;
    }
    for(i=k-1;i>=0;i--)//���
    {
        if(c[i]!=0||flag)//��ֹǰ��0����Ĳ���
        {
            cout<<c[i];
            flag=true;
        }
    }
    if(flag==false)cout<<0;//�����û�������˵��������Ϊ0��Ӧ�����0
    return 0;
}
