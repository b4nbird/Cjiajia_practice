#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	queue<pair<int,int> > q;	//pair是stl中的数据结构，这里用first表示国家号，second表示国家实力 
	cin>>n;
	n=1<<n;				//位运算，等价与n=pow(2,n)(位运算更快)
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push(make_pair(i,x));	//make_pair(i,x)就是建立一个first为i，second为x的pair 
	}
	while(q.size()>2){		//循环将比赛进行至只剩前两名(q.size()为2是时要跳出循环单独判断亚军) 
		pair<int,int> x,y;
		x=q.front();
		q.pop();
		y=q.front();
		q.pop();
		if(x.second>y.second){	//从队头取出两个队，进行比较后将较强的队压入队尾 
			q.push(x);
		}else{
			q.push(y);
		}
	}
	pair<int,int> x,y;
	x=q.front();
	q.pop();
	y=q.front();
	q.pop();
	if(x.second>y.second){		//较弱的那队时亚军，将其国家号输出 
		cout<<y.first<<endl;
	}else{
		cout<<x.first<<endl;
	}
	return 0;
}
