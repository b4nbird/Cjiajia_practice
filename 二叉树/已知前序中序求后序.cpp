#include <bits/stdc++.h>
using namespace std;

string pre,mid;

void res(string pre,string mid){
	if(pre.empty()){
		return;
	}
	char root = pre[0];
	int aim = mid.find(root);
	pre.erase(pre.begin());
	string preleft = pre.substr(0,aim);
	string preright = pre.substr(aim);
	string midleft = mid.substr(0,aim);
	string midright = mid.substr(aim+1);
	res(preleft,midleft);
	res(preright,midright);
	cout << root;
}

int main(){
	cin >> mid >> pre;
	res(pre,mid);
	putchar('\n');
	return 0;
}
