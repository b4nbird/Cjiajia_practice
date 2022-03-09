#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int sum = 0;
	int com;
	char c[13];
	scanf("%s",c);
	sum = 1*(c[0]-'0') + 2*(c[2]-'0') + 3*(c[3]-'0') + 4*(c[4]-'0') + 5*(c[6]-'0') + 6*(c[7]-'0') + 7*(c[8]-'0') + 8*(c[9]-'0') + 9*(c[10]-'0');
	com = sum%11;
	if(com==(c[12]^48)&&c[12]>='0'&&c[12]<='9'||com==10&&c[12]=='X'){
		cout << "Right" << endl;
	} else {
		if(com!=10){
			c[12] = (char)com+'0';
			for(int i=0;i<13;i++){
				cout << c[i];
			}
	} else {
		c[12] = 'X';
		for(int i=0;i<13;i++){
			cout << c[i];			
		}		
	}
	}
}
