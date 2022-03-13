#include <bits/stdc++.h>
using namespace std;

int run(int year){
	int res = 1;
	if(year%4==0&&year%100!=0){
		return res;
	} else if(year%4==0&&year%100==0){
		if(year%400==0){
			return res;
		} else {
			res = 0;
		}
	} else {
		res = 0;
	}
	return res;
}

int main(){
	int n,w,be = 2000,m=1,d=1;
	cin >> n;
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	string week[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Sataurday","Sunday"};
	w = (n + 5) % 7; //ÐÇÆÚ¼¸
	while(n!=0){
		d++;
		n--;
		if(d>month[m]){
			if(m==2&&d==29&&run(be)==1){
				continue;
			} else {
				d = 1;
				m++;
				if(m>12){
					m = 1;
					be++;
				}
			}			
		}
	}
	cout << be << "/" << m << "/" << d << " " << week[w];	 
}
