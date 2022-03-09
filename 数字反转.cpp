#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int n,k,sum=0;
	cin >> n;
	if(n%10==0){
		n = n/10;
	} 
	if(n<0){
		cout << "-";
		n = -n;
	}
	while(n!=0){
		k = n%10; 
		sum = sum*10+k;
		n = n/10;
	}
	cout << sum;
}
