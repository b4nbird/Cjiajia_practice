#include<bits/stdc++.h>
using namespace std;

int sum;
int main()
{
	int n;
	cin >> n;
	int len = n;
	int per[len],flag[len];
	int result[len+1]; 
	result[0] = 0;
	double ans = 0;
	for(int i=0;i<n;i++){
		cin >> per[i];
		flag[i] = i + 1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(per[j]>per[j+1]){
				swap(per[j],per[j+1]);
				swap(flag[j],flag[j+1]);
			}
		}
	}
	for(int i=0;i<len;i++){
		cout << flag[i] << " ";
	}
	cout << endl;
	for(int i=0;i<len;i++){
		cout << per[i] << " ";
	}
	cout << endl;
    for(int i=0;i<len;i++){
        per[i] *= (n-i-1);
        ans += per[i];
        cout << ans << endl;
    }
	printf("%.2lf",ans/n);
}
