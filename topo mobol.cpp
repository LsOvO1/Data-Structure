#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;
const int N = 1e5+5;

int rud[N],dp[N],ans;
int tim[N], n, t , e;
vector<int> edge[N];
queue <int> q;
void solve(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t >> tim[t] >> e;
        while(e != 0){
            edge[e].push_back(t);
            rud[t]++;
            cin >> e;
        } 
    }
    for(int i = 1; i <= n; i++){
        if( !rud[i]){
            q.push(i);
            dp[i] = tim[i];
        }
    }
        while(!q.empty()){
            int now = q.front();
            q.pop();
            for(int i = 0; i < edge[now].size(); i++){
                int nex = edge[now][i];
                dp[nex] = max(dp[nex] , dp[now] + tim[nex]);
                rud[nex]--;
                if(rud[nex] == 0)
                    q.push(nex);
            }
        }
        for(int i = 1; i <= n; i++)
            ans = max(ans , dp[i]);
        cout << ans << endl;
}  
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1; 
    //cin >> t;
    while(t--) solve();    
    return 0;
}