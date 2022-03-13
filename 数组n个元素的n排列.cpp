#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

void all_permutation(int arr[], int n)
{
    sort(arr,arr+n);
    do{
        for(int i=0; i<n; i++){
			printf("%d ",arr[i]);
        }
        printf("\n"); 
    }while(next_permutation(arr,arr+n));
}

int main(){
     int a[4]={3,7,12,19};
    all_permutation(a,4);
}
