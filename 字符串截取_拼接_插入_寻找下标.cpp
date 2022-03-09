#include <bits/stdc++.h>
using namespace std;

int n,a;
string aim;
string c1,b1;
int b,c,d=-1,e;
int main()
{
	cin>>n;
	cin>>aim;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a==1)
		{
			cin>>b1;
			aim+=b1;
			cout<<aim<<endl;
		}
		else if(a==2)
		{
			cin>>b>>c;
			c1=aim.substr(b,c);
			aim=c1;
			cout<<aim<<endl;
		}
		else if(a==3)
		{
			cin>>b>>b1;
			aim.insert(b,b1);
			cout<<aim<<endl;
		}
		else if(a==4)
		{
			cin>>b1;
			if(aim.find(b1)<aim.size()){
				cout<<aim.find(b1)<<endl;
			} else {
				cout<<-1<<endl;
			} 
		}
	}
    return 0;
}

