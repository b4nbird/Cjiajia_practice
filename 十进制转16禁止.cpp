#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	char a[100];
	cin >> n;
	int len = -1;
	while(n!=0){
		len++;
		temp = n%16;
		if(temp>9){
			a[len] = temp-10+'A';
		} else {
			a[len] = temp + '0';
		}
		n = n/16;
	}
	for(int i=len;i>=0;i--){
		cout << a[i];
	}
} 
