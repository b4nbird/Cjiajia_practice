#include <bits/stdc++.h>
using namespace std;



int sort(int a[],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp; 
			} 
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,n);
	cout << a[n-1]-a[0]; 
}
