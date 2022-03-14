#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
void beford(string in,string after){
    if (in.size()>0){
        char ch=after[after.size()-1];
        cout<<ch;//’“∏˘ ‰≥ˆ
        int k=in.find(ch);
        beford(in.substr(0,k),after.substr(0,k));
        beford(in.substr(k+1),after.substr(k,in.size()-k-1));//µ›πÈ◊Û”“◊” ˜£ª
    }
}
int main(){
    string inord,aftord;
    cin>>inord;cin>>aftord;//∂¡»Î
    beford(inord,aftord);cout<<endl;
    return 0;
}
