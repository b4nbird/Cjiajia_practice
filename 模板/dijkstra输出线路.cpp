#include <iostream>
#define Max 503
#define INF 0xcffffff

using namespace std;

struct AMGraph {							//����ͼ
	int vex, arc;
	int arcs[Max][Max];								//�ڽӾ���
};

int dis[Max], path[Max];							//dis�������·����Ȩֵ��pathͨ������·����ǰ�����������·��
bool book[Max];										//���ҵ����·����

void Dijkstra(AMGraph &G)							//�Ͻ�˹�����㷨
{
	for (int i = 1; i <= G.vex; i++)				
	{
		dis[i] = G.arcs[1][i];						//��ʼ��dis����
		path[i] = dis[i] < INF ? 1 : -1;			//��ʼ��·������
	}
	book[1] = true;									
	dis[1] = 0;										//����ʼ��
	for (int i = 2; i <= G.vex; i++)				//����G.vex-1��
	{
		int mins = INF, u = 1;
		for (int j = 1; j <= G.vex; j++)			//�ҵ���ǰû���뼯�ϵ����·�ĺ�����
		{
			if (!book[j] && mins > dis[j]) {
				mins = dis[j];
				u = j;
			}
		}
		book[u] = true;								//���õ���뼯��
		for (int j = 1; j <= G.vex; j++)			//��������������������·���и��£��ɳڲ�����
		{
			if (!book[j] && dis[j] > dis[u] + G.arcs[u][j]) {
				dis[j] = dis[u] + G.arcs[u][j];		//�������·��ֵ
				path[j] = u;						//�޸�j��ǰ��Ϊu
			}
		}
	}
}

void find(int x)									//�ݹ�������·��
{
	if (path[x] == 1) {
		cout << 1;
	}
	else {
		find(path[x]);
	}
	cout << " -> " << x;
	return;
}

void putin(AMGraph &G)								//����ͼ
{
	cin >> G.vex >> G.arc;
	for (int i = 1; i <= G.vex; i++)				//��ʼ���ڽӾ���
		for (int j = 1; j <= G.vex; j++)
			G.arcs[i][j] = INF;

	for (int i = 1; i <= G.arc; i++)			
	{
		int u, v, w;
		cin >> u >> v >> w;
		G.arcs[u][v] = w;
	}
}

void putout(AMGraph &G)								//���
{
	//cout << "��� v1 ����������·��Ϊ: \n";
	for (int i = 1; i < G.vex; i++)
	{
		cout << dis[i] << " ";
	}
	cout << dis[G.vex] << endl;
	for (int i = 2; i <= G.vex; i++)
	{
		cout << "��� v1 �� v" << i << " ��·��Ϊ�� ";
		find(i);
		cout << endl;
	}
}

int main()
{
	AMGraph G;
	putin(G);
	Dijkstra(G);
	putout(G);
	return 0;
}

