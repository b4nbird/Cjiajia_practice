#include <bits/stdc++.h>
using namespace std;
 
void Shell_sort(int a[],int n)
{
	int i,j,k,group;
	for (group = n/2; group > 0; group /= 2)//增量序列为n/2,n/4....直到1
	{
		for (i = 0; i < group; ++i)
		{
			for (j = i+group; j < n; j += group)
			{
				//对每个分组进行插入排序
				if (a[j - group] > a[j]) 
				{
					int temp = a[j]; //把数组下标j的值放到temp中
					k = j - group;
					while (k>=0 && a[k]>temp)
					{
						a[k+group] = a[k];//把大的值往后插入
						k -= group;
					}
					a[k] = temp;//把小的值往前插入
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
