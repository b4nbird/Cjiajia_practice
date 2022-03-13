#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000 + 5;
int w[maxn], v[maxn], dp[maxn];

int main(){
    int N, W;
    cin >> N >> W;
    for(int i = 1; i <= N; ++i)
        cin >> w[i] >> v[i];
    for(int i = 1; i <= N; ++i){
        for(int j = w[i]; j <= W; ++j)
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    }
    cout << dp[W] << endl;
    return 0;
}

