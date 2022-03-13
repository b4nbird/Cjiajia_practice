#include <bits/stdc++.h>
using namespace std;

//动态转移方程：
//   dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]) 

int c,dp[110][20100],w[110],v[110],n;

int main(){
	/*
	输入背包容量c和物品总数n 
	每个物品对应的重量和价值 
	*/
	cin >> n >> c;
	for(int i=1;i<=n;i++){
		cin >> w[i] >> v[i];
	}
	
	/*
	递推求dp数组
	i: 代表物品数量 
	*/
	for(int i=1;i<=n;i++){
		//在i件物品，讨论背包容量分别是1~c的情况下，最大价值
		//j:背包容量 
		for(int j=1;j<=c;j++){
			//放得下 
			if(w[i]<=j){
				dp[i][j] = max(dp[i-1][j],v[i]+dp[i-1][j-w[i]]);
			} else {
				//放不下 
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	
	//输出N件物品，背包容量为c的最大价值 
	cout << dp[n][c];
	return 0;
} 
