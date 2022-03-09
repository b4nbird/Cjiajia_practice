#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main(){
	int m,t,s; 
	cin>>m;
	cin>>t;
	cin>>s;
	if(t==0){
		cout<<0<<endl;
		return 0; 
	}
	if((s/t)>m){
		cout<<0<<endl;
		return 0; 
	}
	else if(s%t==0){
		cout<<m-s/t<<endl;
	}else{
		cout<<m-s/t-1<<endl;
	}
	return 0;
}
