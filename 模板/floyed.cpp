#include <iostream>
#include <algorithm>
#include <stack>
#define MAXN 200
#define INF 99999
using namespace std;
int map[MAXN][MAXN],path[MAXN][MAXN];//ͼ��·�����ڽӾ���
int n,k,begin,end;//������������ 
stack<int> stk;//����·�� 
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
				int len=map[i][k]+map[k][j];//�м�·�� 
				if(len<map[i][j]&&i!=j){
					map[i][j]=len;//·������ 
					path[i][j]=path[k][j];//·������ 
				}
			}
		}
	}
	cout<<map[begin][end]<<endl;//������� 
	//·����� 
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
	cin>>n;//������ 
	cin>>k;//���� 
	cin>>begin>>end;//ʼ���±� 
	for(int i=0;i<MAXN;i++){
		fill(map[i],map[i]+MAXN,INF);//��ʼ��·�����ɴ� 
		fill(path[i],path[i]+MAXN,-1);
	}
	for(int i=0;i<k;i++){
		int a,b,len;
		cin>>a>>b>>len;//����·�� 
		map[a][b]=map[b][a]=len;
		path[a][b]=a;
		path[b][a]=b;
	}
	floyd();
	return 0;
}
