#include <bits/stdc++.h>
using namespace std;

//��̬ת�Ʒ��̣�
//   dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]) 

int c,dp[110][20100],w[110],v[110],n;

int main(){
	/*
	���뱳������c����Ʒ����n 
	ÿ����Ʒ��Ӧ�������ͼ�ֵ 
	*/
	cin >> n >> c;
	for(int i=1;i<=n;i++){
		cin >> w[i] >> v[i];
	}
	
	/*
	������dp����
	i: ������Ʒ���� 
	*/
	for(int i=1;i<=n;i++){
		//��i����Ʒ�����۱��������ֱ���1~c������£�����ֵ
		//j:�������� 
		for(int j=1;j<=c;j++){
			//�ŵ��� 
			if(w[i]<=j){
				dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]);
			} else {
				//�Ų��� 
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	
	//���N����Ʒ����������Ϊc������ֵ 
	cout << dp[n][c];
	return 0;
} 
