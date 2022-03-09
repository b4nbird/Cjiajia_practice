#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,len=0,result,aim;
	char al[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char a[50];
	cin >> n >> a;
	while(a[len]!='\0') len++;
	for(int i=0;i<len;i++){
		for(int j=0;j<26;j++){
			if(al[j]==(char)a[i]){
				aim = j;
			}
		} 
		result = aim+n;
		if(result>=26){
			result = result % 26;
			cout << al[result];
		} else {
				cout << al[result];
		}
	} 
}
