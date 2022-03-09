#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,flag = 0;
	cin >> n;
	int line = n;
	for(int i=0;i<n;i++){
		for(int j=0;j<line;j++){
			flag++;
			printf("%02d",flag);
		}
		line--;
		cout << endl;
	}
}
