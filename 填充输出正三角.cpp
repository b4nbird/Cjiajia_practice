#include<cstdio>
#include<iostream>
 
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag=0; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			flag++; 
			printf("%02d",flag);
		}
		cout << endl;
	}
	cout << endl;
	int len=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout << "  ";
		}
		while(len <= i*(i+1)/2){
			printf("%02d",len); 
			len++;
		}
		printf("\n");
	}
}
