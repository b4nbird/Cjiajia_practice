#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	queue<pair<int,int> > q;	//pair��stl�е����ݽṹ��������first��ʾ���Һţ�second��ʾ����ʵ�� 
	cin>>n;
	n=1<<n;				//λ���㣬�ȼ���n=pow(2,n)(λ�������)
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push(make_pair(i,x));	//make_pair(i,x)���ǽ���һ��firstΪi��secondΪx��pair 
	}
	while(q.size()>2){		//ѭ��������������ֻʣǰ����(q.size()Ϊ2��ʱҪ����ѭ�������ж��Ǿ�) 
		pair<int,int> x,y;
		x=q.front();
		q.pop();
		y=q.front();
		q.pop();
		if(x.second>y.second){	//�Ӷ�ͷȡ�������ӣ����бȽϺ󽫽�ǿ�Ķ�ѹ���β 
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
	if(x.second>y.second){		//�������Ƕ�ʱ�Ǿ���������Һ���� 
		cout<<y.first<<endl;
	}else{
		cout<<x.first<<endl;
	}
	return 0;
}
