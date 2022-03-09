#include<iostream>
using namespace std;

int su(int a){
	int i,flag,r;
	flag=1;
	if(a==2){
		return flag;
	} else {
		for(i=2;i<a;i++){
			r=a%i;
			if(r == 0) flag=0;
		}
	return flag;
	}
}

int hui(int a){
	int temp = a,sum = 0;
	while(a){
		sum = sum * 10 + a % 10;
		a /= 10;
	}
	if(temp==sum){
		return 1;
	} else {
		return 0;
	}
}

int main()
{
	int a,b;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if(hui(i)==1){
			if(su(i)==1){
				cout << i << endl;
			}
		}

	}
	return 0;
}
