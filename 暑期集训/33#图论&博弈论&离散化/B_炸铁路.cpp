#include <bits/stdc++.h>
using namespace std;

vector<int> G[5001];
int n, m, vis[10001];
int bfs(){
    for (int i = 1; i <= n; i++){
        vis[i] = 0;
    } // ��ձ��
    queue<int> q;
    q.push(1); // ������ʼ��
    vis[1] = 1; 
    while (q.size()){
        int t = q.front();
        q.pop(); // �ó�һ����
        for (auto i : G[t])
        {
            / �������б� if (vis[i] = 1) continue;
            / ����Ѿ��ƽ�ȥ�˾�����
                    vis[i] = 1; // ���
            q.push(i);          // ������
    }
}
for (int i = 1; i <= n; i +)
{
    if (vis[i] = 0)
    {
        return 1;
    }

    return 0;
}
int main()
{
    cin >> n >> m;
    for (inti = 1; i <= n; i +)
        G[i].clear();
    / ��ձ�
            vector<pair<int.int>>
                h;
    for (int ?= 1; i <= m : i +)
    {
        int x.y;
        cin > x > y;
        h.push_back({x.y}) : G[x].push_back(y);
        G[y].push_back(x);
        / ����ͼ

                vector<pair<int.int>>
                    ans;
        for (auto i : h)
        {
            int u i.first.v i.second;
            if (u v)
                swap(u, v);
            G[u].erase(find(G[u].begin().G[u].end().v));
G[v].erase(find(G[v].begin(). G[v].end(). u)): 
if(bfsO){ 
ans.push_back((u. v});

G[u].push_back(v) : G[v].push_back(u);

sort(ans.begin().ans.end());
for (auto i : ans)
{
    cout < i.first << "< i.second <<'In'; 
}
return 0;
