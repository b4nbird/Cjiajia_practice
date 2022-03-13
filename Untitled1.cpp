#include <bits/stdc++.h>
using namespace std;

void shellsort(int a[],int n){
	for(int ad=n/2;ad>0;ad/=2){
		for(int i=0;i<ad;i++){
			for(int j=i+ad;j<n;j+=ad){
				if(a[j-ad]>a[j]){
					int temp = a[j];
					int k = j-ad;
					while(k>0&&a[k]>temp){
						a[k+ad] = a[j];
						k -= ad;
					}
					a[k] = temp; 
				}
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i]; 
	}
	shellsort(a,n);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
