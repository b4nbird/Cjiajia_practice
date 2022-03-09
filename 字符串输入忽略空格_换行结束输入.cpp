#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[100];
	cin.get(a,100);
	int len = 0;
	while(a[len]!='\0'){ 
		len++;
	}
	for(int i=0;i<len;i++){
		if((int)a[i]==32){
			len = len - 1;
		}
	} 
	cout << len;
	return 0;
}
/**
#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[100];
	fgets(a,100,stdin);
	int len = strlen(a);
	int flag = 0;
	for(int i=0;i<len;i++){
		if(a[i]>='a'&&a[i]<='z'){
			flag++;
		}
		if(a[i]>='A'&&a[i]<='Z'){
			flag++;
		}
		if(a[i]<='9'&&a[i]>='0'){
			flag++;
		}
	} 
	cout << flag;
	return 0;
}
**/

