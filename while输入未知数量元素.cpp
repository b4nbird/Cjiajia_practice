#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i = 0,count = 0;
	cin >> n;
	while(scanf("%d",&m)!=EOF){
		i++;
		if(i%2!=0){
			for(int i=0;i<m;i++){
				cout << "0";
				count++;
				if(count == n){
					cout << endl;
					count = 0;
				}
			}
		} else {
			for(int i=0;i<m;i++){
				cout << "1";
				count++;
				if(count == n){
					cout << endl;
					count = 0;
				} 
			}
		}
	}
	return 0;
}

