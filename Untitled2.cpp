#include<string>
#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
string pre,mid;
void res(string pre,string mid)
{
    if(pre.empty()){
		return;
    }
    char root=pre[0];
    int k=mid.find(root);
    pre.erase(pre.begin());
    string preleft=pre.substr(0,k);
    string preright=pre.substr(k);
    string midleft=mid.substr(0,k);
    string midright=mid.substr(k+1);
    res(preleft,midleft);
    res(preright,midright);
    printf("%c",root);
}
int main()
{
    cin>>mid>>pre;
    res(pre,mid);
    putchar('\n');
    return 0;
}
