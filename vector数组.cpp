#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,num,m;
	vector<int> q;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		q.push_back(num);
	} 
	cin >> m;
	m++;
	while(m--){
		string a;
		getline(cin,a);
		if(a[0]=='A'){
			int numa = a[2] - '0'; 
			a.push_back(numa);
		} else if(a[0]=='I'){
			int numb = a[2] - '0';
			int numc = a[4] - '0';
			q.insert(q.begin()+numb-1,numc);
		} else if(a[0]=='Q'){
			int count = 0;
			int numd = a[2] - '0';
			for(int i=0;i<q.size();i++){
				if(numd==q[i]){
					count++;
				}
			}
			cout << count << endl;
		} else if(a[0]=='P'){
			for(int i=0;i<q.size();i++){
				cout << q[i] << " "; 
			}
		}
	}
	return 0;
}
