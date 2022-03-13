#include<bits/stdc++.h>

using namespace std;
int main()
{
	int a[10000];//开始时间
	int b[10000];//结束时间
	int n,i,j;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}	
	sort(a,a+n);
	sort(b,b+n);
	i=j=0;
	int count=0;//实时会场数
	int ans=0;//答案 
	while(i<n&&j<n)//a，b两个数组同时在时间轴上走 
	{
		if(a[i]<b[j])
		{
			count++;
			i++;
		}
		if(ans<count)//这句对ans的更新一定要紧跟在count加了之后 
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
		//时间轴走完了开始时间或者结束时间，就可以得到最多的同时进行的活动的场数 
	printf("%d\n",ans);

	return 0;
}
