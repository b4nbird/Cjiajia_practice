#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b; 
	int le[100],ri[100],tree[10000];
	for(int i=0;i<b;i++){
		cin >> le[i]; 
		cin >> ri[i];
	}
	int flag=0;
	for(int i=0;i<=a;i++){
		tree[i] = 0;
		for(int j=0;j<b;j++){
			if(i>=le[j]&&i<=ri[j]) { tree[i] = 1; } 
		}
		if(tree[i]==0){
			flag++;
		}
	}
	cout << flag;
	return 0;
}
