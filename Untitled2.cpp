#include <bits/stdc++.h>
using namespace std;

int max;
int main(){
	int n;
	cin >> n;
	int count;
	for(int i=0;i<n;i++){
		string a;
		int i = 0,maxx = 0,tmp = 1;
		cin >> a;
		while(a[i]){
			if(a[i]==a[i+1]){
				tmp++;
			} else {
				if(tmp>maxx&&tmp>=2){
					maxx = tmp;
				}
				tmp = 1;
			}
			i++;
		}
		cout << maxx << endl; 
	}
}
