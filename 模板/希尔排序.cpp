#include <bits/stdc++.h>
using namespace std;
 
void Shell_sort(int a[],int n)
{
	int i,j,k,group;
	for (group = n/2; group > 0; group /= 2)//��������Ϊn/2,n/4....ֱ��1
	{
		for (i = 0; i < group; ++i)
		{
			for (j = i+group; j < n; j += group)
			{
				//��ÿ��������в�������
				if (a[j - group] > a[j]) 
				{
					int temp = a[j]; //�������±�j��ֵ�ŵ�temp��
					k = j - group;
					while (k>=0 && a[k]>temp)
					{
						a[k+group] = a[k];//�Ѵ��ֵ�������
						k -= group;
					}
					a[k] = temp;//��С��ֵ��ǰ����
				}
			}
		}
	}
}
 
int main()
{
	int a[10] = {1,51,6,2,8,2,564,1,65,6};
 
	Shell_sort(a,10);
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
