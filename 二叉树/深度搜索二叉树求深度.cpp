#include <bits/stdc++.h>
using namespace std;

const int maxx = 1e6 + 10;

struct node {
	int left,right;
};
node tree[maxx];

int n,ans;

void dfs(int id,int dep){
	if(id==0){
		return;
	}
	ans = max(ans,dep);
	dfs(tree[id].left,dep+1);
	dfs(tree[id].right,dep+1);
}

int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> tree[i].left >> tree[i].right;
	}
	dfs(1,1);
	cout << ans << endl;
	return 0;
}
