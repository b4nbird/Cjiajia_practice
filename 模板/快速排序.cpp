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
		}//产生a[i]>mid,a[j]<mid的数，应当交换 
		if(i<=j){
			swap(a[i],a[j]);
			i++;//处理完两边开始下一个目标 
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
