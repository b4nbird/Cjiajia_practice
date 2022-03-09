#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int sum[1000000] = {0};
	int flag = -1;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				flag++;
				sum[i+j+k]++;
			}
		}
	}
	int count,max=0;
	for(int i=0;i<=flag;i++){
		if(sum[i]>max){
			max = sum[i];
			count = i;
		}
	}
	cout << count << endl;
	return 0;
}
