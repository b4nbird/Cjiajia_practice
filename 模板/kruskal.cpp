#include <bits/stdc++.h>
using namespace std;
const int N = 200001;
int father[N];
int n, m;

struct Node
{
    int value, a, b;
}e[N];

bool cmp(const Node& a, const Node& b)
{
    return a.value < b.value;
}

int find_(int x)        //并查集查找 
{
    int root = x;
    while(father[root] != 0)
        root = father[root];
    while(root != x)
    {
        int temp = father[x];
        father[x] = root;
        x = temp;
    }
    return root;
}
void kruskal()
{
    int t = 1, costlenth = 0;        //t表示已入树的边数，costlenth表示生成树权值总和 
    for(int i = 1; i <= m; i++)
    {
        int p = find_(e[i].a), q = find_(e[i].b);
        if(p != q)                    //合并集合 
        {
            costlenth += e[i].value;
            father[q] = p;
            t++;
            if(t == n)
            {
                cout << costlenth << endl;
                return;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
		cin >> e[i].a >> e[i].b >> e[i].value;
    }
    sort(e+1, e+m+1, cmp);            //将权值从小到大排序 
    kruskal();
    return 0;
}
