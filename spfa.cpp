#include<bits/stdc++.h>
using namespace std;

const long long inf = 2147483647;
const int maxn = 1e5 + 5;
const int maxm = 5e6 + 5;

int n, m , s , num_edge = 0;
int dis[maxn] , vis[maxn], head[maxm];

struct Edge{
    int next , to , dis;
}edge[maxm];  //结构体表示静态邻接表

void addedge(int from , int to , int dis){  //邻接表建图  以下是数据结构书上的标准代码，不懂翻书看解释
    edge[++num_edge].next = head[from];  //链式存储下一条出边
    edge[num_edge].to = to;             //当前节点编号
    edge[num_edge].dis = dis;           //本条边的距离
    head[from] = num_edge;              //记录下一次的出边情况
}

void spfa(){
    queue<int> q;                       //spfa用队列，这里用了STL的标准队列
    for(int i = 1; i <= n; i++){
        dis[i] = inf;                   //带权图初始化
        vis[i] = 0;                     //记录点i是否在队列中，同dijkstra算法中的visited数组
    }
    q.push(s);
    dis[s] = 0;
    vis[s] = 1;                         //第一个顶点入队，进行标记
    while(!q.empty()){
        int u =q.front();
        q.pop();
        vis[u] = 0;
        for(int i = head[u]; i ; i = edge[i].next){
            int v = edge[i].to;
            if(dis[v] > dis[u] + edge[i].dis){      //如果有最短路就更改
                dis[v] = dis[u] + edge[i].dis;
                if(vis[v] == 0){
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }
}
int main(){
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++){
        int f , g , w;
        cin >> f >> g >> w;
        addedge(f , g , w);
    }
    spfa();
    for(int i = 1; i <= n; i++)
        if(s == i) cout << 0 <<" ";
        else cout << dis[i] << " ";
    return 0;
}
