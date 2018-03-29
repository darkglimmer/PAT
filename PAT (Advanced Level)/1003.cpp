//救援小组个数相当于点权，用Dijkstra求边权最小的最短路径的条数，以及这些最短路径中点权最大的值～
#include <iostream>
#include <algorithm>
using namespace std;
int n, m, c1, c2;
int e[510][510] = {0}, weight[510] = {0}, dis[510] = {0}, num[510] = {0}, w[510] = {0};
bool visit[510];
const int inf = 99999999;
int main() {
    scanf("%d%d%d%d", &n, &m, &c1, &c2);
    for(int i = 0; i < n; i++) {
        scanf("%d", &weight[i]);
    }
    //将一个区间的元素都赋予val值。函数参数：fill(first,last,val);first为容器的首迭代器，last为容器的末迭代器，val为将要替换的值。
    fill(e[0], e[0] + 510 * 510, inf);
    fill(dis, dis + 510, inf);
    int a, b, c;
    for(int i = 0; i < m; i++) {
        scanf("%d%d%d", &a, &b, &c);
        e[a][b] = e[b][a] = c;//用e的两个下标表示两个城市
    }
    dis[c1] = 0;//dis[i]：从出发点到i结点最短路径的路径长度
    w[c1] = weight[c1];
    num[c1] = 1;//num[i]：从出发点到i结点最短路径的条数
    for(int i = 0; i < n; i++) {
        int u = -1, minn = inf;
        for(int j = 0; j < n; j++) {
            if(visit[j] == false && dis[j] < minn) {
                u = j;
                minn = dis[j];
            }
        }//给visit数组赋值
        if(u == -1) break;
        visit[u] = true;
        for(int v = 0; v < n; v++) {
            if(visit[v] == false && e[u][v] != inf) {
                if(dis[u] + e[u][v] < dis[v]) {
                    dis[v] = dis[u] + e[u][v];
                    num[v] = num[u];
                    w[v] = w[u] + weight[v];
                } else if(dis[u] + e[u][v] == dis[v]) {
                    num[v] = num[v] + num[u];
                    if(w[u] + weight[v] > w[v])
                        w[v] = w[u] + weight[v];//w[i]：从出发点到i点救援队的数目之和
                }
            }
        }
    }
    printf("%d %d", num[c2], w[c2]);
    return 0;
}
