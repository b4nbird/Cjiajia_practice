#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,aim,flag = 0;
	cin >> n >> x;
	for(int i=1;i<=n;i++){
		int temp = i;
		while(temp!=0){
			aim = temp%10;
			temp = temp/10;
			if(aim==x){
				flag++;
			} 
		}
	}
	cout << flag;
}
