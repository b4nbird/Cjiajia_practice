#include <iostream>
#include<cstring>
using namespace std;
 
const int nmax=1000+5;
int a[nmax];//�洢��ֵ����
int dp[nmax];//dp[i]��¼������a[i]Ϊ��β��LIS�ĳ��� 
 
int main() {
	int n; 
	cin >> n; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		dp[i]=1;
	}
	int ans=1;//ans��¼�������е�LIS���ȣ���ֵΪ1 
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				dp[i]=max(dp[j]+1,dp[i]);
			}
			ans=max(ans,dp[i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}
