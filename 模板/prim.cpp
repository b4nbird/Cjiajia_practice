#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;
/*��С������Primδ�Ż���*/

int book[100];//���ڼ�¼�������û�б����ʹ�
int dis[100];//���ڼ�¼�������ľ������·��
int MAX = 99999;//�߽�ֵ
int maps[100][100];//���ڼ�¼���бߵĹ�ϵ

int main()
{
    int i,j,k;//ѭ������
    int n,m;//�����N���㣬��M����
    int x,y,z;//�������
    int min,minIndex;
    int sum=0;//��¼���Ĵ�
    
    cin>>n>>m;

    //��ʼ��maps�������Լ����Լ���0�������Ǳ߽�ֵ
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if(i!=j)
                maps[i][j] = MAX;
            else
                maps[i][j] = 0;
        }
    }
            
    for (i = 1; i <= m; i++)
    {
        cin>>x>>y>>z;//�����Ϊ����ͼ
        maps[x][y] = z;
        maps[y][x] = z;
    }

    //��ʼ���������飬Ĭ���Ȱ���1��������ҳ����ź�
    for (i = 1; i <= n; i++)
        dis[i] = maps[1][i];

    book[1]=1;//��¼1�Ѿ������ʹ���

    for (i = 1; i <= n-1; i++)//1�Ѿ����ʹ��ˣ�����ѭ��n-1��
    {
        min = MAX;//������Сֵ��ֵ����ʵ����ҲӦ�ö�minIndex���и�ֵ���������ǳ������ͼһ������С���������Ҳ�����������ͬ�ı�
        //Ѱ����������ĵ�
        for (j = 1; j <= n; j++)
        {
            if(book[j] ==0 && dis[j] < min)
            {
                min = dis[j];
                minIndex = j;
            }
        }

        //��¼������Ѿ������ʹ���
        book[minIndex] = 1;
        sum += dis[minIndex];

        for (j = 1; j <= n; j++)
        {
            //������û�б����ʹ�����������㵽����һ��ľ�������ڵ����ľ������ô����
            if(book[j] == 0 && maps[minIndex][j] < dis[j])
                dis[j] = maps[minIndex][j];
        }
    }

    cout<<sum<<endl;
}
