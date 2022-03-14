#include <bits/stdc++.h>
using namespace std;

const int v = 9999;
int a[100][100];
int m,n;

int main(){
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				continue;
			} else {
				a[i][j] = v;
			}
		}
	}
	int t1,t2,t3;
	for(int i=1;i<=n;i++){
		cin >> t1 >> t2 >> t3;
		a[t1][t2] = t3;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]>a[i][k]+a[k][j]){
					a[i][j] = a[i][k] + a[k][j];
				} 
			}
		}
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
