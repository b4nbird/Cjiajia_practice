#include <bits/stdc++.h>
using namespace std;

int proportion(int a[],int l,int r){
	int i = l,j = r,x = a[l];
	while(i<j){
		while(i<j&&a[j]>=x){
			j--;
		}
		if(i<j){
			a[i++] = a[j];
		}
		while(i<j&&a[i]<=x){
			i++;
		}
		if(i<j){
			a[j--] = a[i];
		}
	}
	a[i] = x;
	return i;
}

void quicksort(int a[],int l,int r){
	if(l>=r){
		return;
	}
	int i = proportion(a,l,r);
	quicksort(a,l,i-1);
	quicksort(a,i+1,r);
}

int main(){
	int n;
	cin >> n;
	int len = n;
	int a[len];
	for(int i=0;i<len;i++){
		cin >> a[i];
	}
	quicksort(a,0,len-1);
	for(int i=0;i<len;i++){
		cout << a[i] << " ";
	}
	return 0;
}
