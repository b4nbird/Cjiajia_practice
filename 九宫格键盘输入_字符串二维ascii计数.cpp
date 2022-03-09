#include <bits/stdc++.h>
using namespace std;

int main()
{	
	string a;
	getline(cin,a);
	int len = a.length();
	int sum = 0;
	int cli[256] = {0};
	string key[12] = {
		"",    "abc", "def",
		"ghi", "jkl", "mno",
		"pqrs","tuv", "wxyz",
		"*",    " " , "#"
		};
	for(int i=0;i<12;i++){
		for(int j=0;j<key[i].size();j++){
			cli[key[i][j]] = j+1;
		}
	}
	for(int i=0;i<len;i++){
		sum += cli[a[i]];
	} 
	cout << sum;
}

