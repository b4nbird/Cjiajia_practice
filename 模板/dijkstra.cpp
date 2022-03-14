#include <bits/stdc++.h>
using namespace std;

long long ans[100000];
bool vis[100000];
int m,n,s; 
struct edge{
	int to;
	int next;
	int w;
}edge[100000];
int head[100000];
int cnt;

void addedge(int qi,int zhong,int quan){
	edge[++cnt].to = zhong;
	edge[cnt].next = head[qi];
	edge[cnt].w = quan;
	head[qi] = cnt;
}

int main(){
	cin >> m >> n >> s;//从s点出发 ，n行数据 
	for(int i=1;i<=n;i++){
		ans[i] = 0xFFFFFFFF;
	}
	ans[s] = 0;
	for(int i=1;i<=n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		addedge(a,b,c);
	} 
	int pos = s;
	while(vis[pos]==0){
		long long minn = 0xFFFFFFFF;
		vis[pos] = 1;
		//遍历以x为起点的所有边
		for(int i=head[pos];i!=0;i=edge[i].next){
			if(!vis[edge[i].to]&&ans[edge[i].to]>ans[pos]+edge[i].w){
				ans[edge[i].to] = ans[pos] + edge[i].w; 
			}
		}
		for(int i=1;i<=m;i++){
			if(ans[i]<minn&&vis[i]==0){
				minn = ans[i];
				pos = i;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << " "; 
	}
} 
