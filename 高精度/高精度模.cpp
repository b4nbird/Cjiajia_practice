#include<bits/stdc++.h>
using namespace std;
string s;
long long k=0,a,b,i;
bool flag;
int main()
{
    cin>>s>>b;//���뱻�����ͳ���
    for(int i=0;i<s.size();i++)//�Ӹ�λ��ʼ��һλһλ���λ
    {
        a=a*10+s[i]-'0';//���ϱ���������һλ
        a%=b;//һֱȡ��
    }
    cout<<a;
    return 0;
}
