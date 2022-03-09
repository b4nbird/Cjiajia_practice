#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,min=300000,sum=0;
	cin >> n >> m;
	int len = n;
	int a[len];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	if(n==m){
		for(int i=0;i<n;i++){
			sum += a[i];
		}
		min = sum;
	}

	for(int i=0;i<n-m;i++){
		sum = 0;
		for(int j=i;j<i+m;j++){
			sum += a[j];
		} 
		if(sum<min){
			min = sum;
		}
	}
	cout << min;
	return 0;
}
