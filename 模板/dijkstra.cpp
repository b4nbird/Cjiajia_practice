#include<bits/stdc++.h>
using namespace std;
/*
4 6 1
1 2 2
2 3 2
2 4 1
1 3 5
3 4 3
1 4 4
*/
int n,m,s;

struct node
{
    int next,to,len;
}edge[500005];

int cnt;
int head[100005];
bool visit[100005];
int dis[100005];

priority_queue<int,vector<pair<int,int> >,greater<pair<int,int> > >q;

void Add(int a,int b,int c)
{
    cnt++;
    edge[cnt]=(node){head[a],b,c};
    head[a]=cnt;
}

int main()
{
    for(int i=0;i<100005;i++) head[i]=0;
    for(int i=0;i<100005;i++) dis[i]=INT_MAX;
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Add(a,b,c);
    }
    dis[s]=0;
    q.push(make_pair(0,s));      //将源点入队
    while(!q.empty())
    {
    	int now=q.top().second;     //取节点编号
    	q.pop();    //弹出
    	if(visit[now]) continue;    //已经遍历过
        visit[now]=true;
        for(int i=head[now];i;i=edge[i].next) if(!visit[edge[i].to] && dis[edge[i].to]>dis[now]+edge[i].len)     //标准前向星遍历
        {
            dis[edge[i].to]=dis[now]+edge[i].len;
            q.push(make_pair(dis[edge[i].to],edge[i].to));    //入队
        }
    }
    for(int i=1;i<=n;i++) cout<<dis[i]<<' ';
    return 0;
}
