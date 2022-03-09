#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int len = n;
	int a[len];
	int result[1000] = {0};
	int fina[1000] = {0};
	for(int i=0;i<len;i++){
		cin >> a[i];
	}
	int flag = 0;
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			flag++;
			if(i==j){	
				continue;
			}
			result[flag] = a[i]+a[j];			
		}
	}
	sort(result,result+flag);
	int m = unique(result, result + flag) - result;
	for(int i=0;i<m;i++){
		fina[i] = result[i];
	} 
	int count = 0;
	for(int i=0;i<flag;i++){
		for(int j=0;j<len;j++){
			if(a[j]==fina[i]){
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
