#include <iostream>
#include <algorithm>
#include <stack>
#define MAXN 200
#define INF 99999
using namespace std;
int map[MAXN][MAXN],path[MAXN][MAXN];//图和路径的邻接矩阵
int n,k,begin,end;//顶点数，边数 
stack<int> stk;//保存路径 
/*
5
6
0 1
0 2 60
0 3 30
0 4 50
1 2 20
1 4 10
3 4 10
*/
void floyd(){
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int len=map[i][k]+map[k][j];//中间路径 
				if(len<map[i][j]&&i!=j){
					map[i][j]=len;//路长更新 
					path[i][j]=path[k][j];//路径更新 
				}
			}
		}
	}
	cout<<map[begin][end]<<endl;//长度输出 
	//路径输出 
	int p=end;
	stk.push(p);
	while(stk.top()!=begin){
		p=path[begin][p];
		stk.push(p);
	}
	while(!stk.empty()){
		cout<<stk.top();
		stk.pop();
		if(!stk.empty()) cout<<"->";
	}
}
int main(){
	cin>>n;//顶点数 
	cin>>k;//边数 
	cin>>begin>>end;//始终下标 
	for(int i=0;i<MAXN;i++){
		fill(map[i],map[i]+MAXN,INF);//初始化路径不可达 
		fill(path[i],path[i]+MAXN,-1);
	}
	for(int i=0;i<k;i++){
		int a,b,len;
		cin>>a>>b>>len;//输入路径 
		map[a][b]=map[b][a]=len;
		path[a][b]=a;
		path[b][a]=b;
	}
	floyd();
	return 0;
}
