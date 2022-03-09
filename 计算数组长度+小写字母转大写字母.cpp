#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[200];
	fgets(a,200,stdin);
	int len = 0;
	while(a[len]!='\0') len++; 
	for(int i=0;i<len;i++){
		if(a[i]<97&&a[i]>122){
			printf("%c",a[i]);
		} else {
			printf("%c",a[i]-32);
		}
	}
}
