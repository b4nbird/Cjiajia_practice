#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,c,d;
	char a;
	char b[10]; 
	char fina[100];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> b;
		if(b[0]>='a'&&b[0]<='z'){
			a = b[0];
			cin >> c >> d;
		} else {
			sscanf(b,"%d",&c);
			cin >> d;
		}
		memset(fina,0,sizeof(fina));
		if(a=='a'){
			sprintf(fina,"%d+%d=%d",c,d,c+d);
		} else if(a=='b'){
			sprintf(fina,"%d-%d=%d",c,d,c-d);
		} else if(a=='c'){
			sprintf(fina,"%d*%d=%d",c,d,c*d);
		}
		cout << fina <<  endl << strlen(fina) << endl; 
	}
	return 0;
}

