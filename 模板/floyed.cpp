#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int v=99;
/*
4个城市8条公路 有向图 
4 8
1 2 2
1 3 6
1 4 4
2 3 3
3 1 7
3 4 1
4 1 5
4 3 12
输入任意两点之间的最短距离 
*/ 
int main()
{
	int a[100][100];
 	int n,m,t1,t2,t3;
 	cin>>n>>m;
 	for(int i=1;i<=n;i++){
  		for(int j=1;j<=n;j++){
   			if(i==j) a[i][j]=0;
   			else a[i][j]=v;
  		}
 	}
 	for(int i=1;i<=m;i++){	
  		cin>>t1>>t2>>t3;
  		a[t1][t2]=t3;
 	}
 	for(int k=1;k<=n;k++){
  		for(int i=1;i<=n;i++){
   			for(int j=1;j<=n;j++){
    			if(a[i][j]>a[i][k]+a[k][j]){
     				a[i][j]=a[i][k]+a[k][j];
    			}
   			}
  		}
 	}
 	for(int i=1;i<=n;i++){
  		for(int j=1;j<=n;j++){
   			cout<<a[i][j]<<" ";
  		}
  		cout<<endl;
	}
 	return 0;
}
