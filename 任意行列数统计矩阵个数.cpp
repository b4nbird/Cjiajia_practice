#include<bits/stdc++.h>
using namespace std;

long long n,m,chang,zhen;
int main() {
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) {
            if(i==j){
				zhen+=(n-i)*(m-j);
            } else {
				chang+=(n-i)*(m-j);
            }
        }
    cout<<zhen<<" "<<chang<<endl;
    return 0;
}
