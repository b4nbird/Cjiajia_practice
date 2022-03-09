#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a;
	getchar();
	transform(a.begin(),a.end(),a.begin(),::tolower);
	getline(cin,b);
	b.insert(0," ");
	a=a+' ';
	a.insert(a.begin(),' '); 
	transform(b.begin(),b.end(),b.begin(),::tolower);
	if(b.find(a)==-1)
	{
		cout<<"-1";
	}
	else
	{	
		int sum=0;int n=0;
		while(b.find(a,n)!=-1)
		{	
			sum++;
			n=b.find(a,n)+1;
			
		}
		cout<<sum<<" ";
		cout<<b.find(a);
	}
}

