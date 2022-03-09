#include <bits/stdc++.h>
using namespace std;
int s[2000];

int zhi(int n){
	int flag = 1;
	if(n==0||n==1){
		flag = 0;
		return flag;
	}
	if(n==2){
		return flag;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			flag = 0;
		}
	}
	return flag;
}

int main(){
	int n,len=0,aim,maxx,minn=1;
	int *b,*c;
	char a[100];

	cin >> a;
	while(a[len]!='\0') len++;
	for(int i=0;i<len;i++){
		s[a[i]]++;
	}
	/**for(int i=0;i<2000;i++){
		if(s[i]){
			cout << char(i) << " " << s[i] << endl;
		}
	}**/
	for(int i=0;i<2000;i++){
		if(s[i]){
			if(s[i]<s[i+1]){
				minn = s[i];
			}
		} 
	}
	b = max_element(s,s+128);
	maxx = *b;
	aim = maxx - minn;
	//cout << "max: " << maxx << " " << "min:" << minn <<endl;
	if(zhi(aim)==1){
		cout << "Lucky Word" << endl;
		cout << aim << endl; 
	} else {
		cout << "No Answer" << endl;
		cout << aim << endl;
	}
}

