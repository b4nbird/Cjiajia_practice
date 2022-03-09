#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int run(int year){	
	int result;
	if(year%4==0&&year%100!=0){
		result = 1;
	}else if(year%4==0&&year%100==0){	
		if(year%400==0){
			result = 1;
		} else {
			result = 0;
		}
	} else {
		result = 0;
	}
	return result;
}


int main(){
	int year,month,a;
	int n[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int r[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	cin >> year >> month;
	a = run(year);
	if(a==1){
		cout << r[month-1];
	} else {
		cout << n[month-1];
	}
	
}
