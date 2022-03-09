#include <bits/stdc++.h>
using namespace std;

int res[256];
int fina[26];
int main(){

	char al[26] = {'A','B','C','D','E','F','G'
				  ,'H','I','J','K','L','M','N'
				  ,'O','P','Q','R','S','T','U'
				  ,'V','W','X','Y','Z'};
	for(int i=0;i<4;i++){
		string a;
		getline(cin,a);
		for(int i=0;i<a.size();i++){
			for(int j=0;j<26;j++){
				if(a[i]==al[j]){
					res[a[i]]++;
				}
			} 
		}
	}
	int flag = -1;
	for(int i=0;i<256;i++){
		if(res[i]){
			cout << (char)i << ":" << res[i] << endl;
			flag++;
			fina[flag] = res[i];
		}
	}
	int max = 0;
	for(int i=0;i<26;i++){
		if(max<fina[i]){
			max = fina[i];
		}
	}
	cout << max << endl; 
	for(int j=max;j>=1;j--){
		for(int k=0;k<26;k++){
			if(fina[k]>=j){
				cout << "* ";
			} else {
				cout << "  ";
			}
		} 
		cout << endl; 
	}
	for(int i=0;i<26;i++){
		cout << (char)(i+'A') << " ";
	}

}

