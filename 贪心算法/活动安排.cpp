#include<bits/stdc++.h>

using namespace std;
int main()
{
	int a[10000];//��ʼʱ��
	int b[10000];//����ʱ��
	int n,i,j;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}	
	sort(a,a+n);
	sort(b,b+n);
	i=j=0;
	int count=0;//ʵʱ�᳡��
	int ans=0;//�� 
	while(i<n&&j<n)//a��b��������ͬʱ��ʱ�������� 
	{
		if(a[i]<b[j])
		{
			count++;
			i++;
		}
		if(ans<count)//����ans�ĸ���һ��Ҫ������count����֮�� 
			ans=count;
		if(a[i]>b[j])
		{
			count--;
			j++;
		}
		if(a[i]==b[j])
		{
			i++;j++;
		}
	}
		//ʱ���������˿�ʼʱ����߽���ʱ�䣬�Ϳ��Եõ�����ͬʱ���еĻ�ĳ��� 
	printf("%d\n",ans);

	return 0;
}
