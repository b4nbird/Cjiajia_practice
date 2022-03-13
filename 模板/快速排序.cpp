#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int qsort(int l,int r){
	int i = l, j = r;
	int mid = a[(l+r)/2];
	do{
		while(a[i]<mid){
			i++;
		}
		while(a[j]>mid){
			j--;
		}
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		} 
	}while(i<=j);
	if(l<j){
		qsort(l,j);
	}
	if(i<r){
		qsort(i,r);
	}
}

int main(){
	int n;
	cin >> n;
	int len = n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	qsort(0,n-1);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
} 
