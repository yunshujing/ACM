#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define fi first
#define se second
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

vector<int> g[1001];
int n, m,vis[1001];

int bfs(int u){
    for (int i = 1; i <= n;i++){
        vis[i] = 0;
    }//��ձ��
    queue<int> q;
    q.push(u);//�����ʼ��
    vis[u] = 1;
    int mx = u;
    while(q.size()){
        int t = q.front();//�ó�һ����
        q.pop();
        for(auto i:g[t]){//�������б�
            if(vis[i]==1)//����Ѿ��ƽ�ȥ�˾�����
                continue;
            vis[i] = 1;//���
            mx = max(mx, i);
            q.push(i);//������
        }
    }
    return mx;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    cin >> n >> m;

    for (int i = 1; i <= m;i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y); // ����ͼ����
        // g[y].push_back(x); // ����ͼ����
    }
    for (int i = 1; i <= n;i++){
        cout << bfs(i) << " \n"[i == n];
    }
        return 0;
}