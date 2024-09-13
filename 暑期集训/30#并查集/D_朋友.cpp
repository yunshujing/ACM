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

vector<int> p(N);//�ҵĸ�����˭
vector<int> sise(N);//���ϴ�С
//��ʼ��
void init(int n){
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;//�Լ����Լ��ļ໤��
        sise[i] = 1;
    }
    
}
//���Լ������������ ����O(1)
int find(int x){
	if(x != p[x]){
        p[x] = find(p[x]);//·��ѹ��[better!]
    }
    return p[x];
}
//�ϲ�
void merge(int u,int v){
    int pu = find(u);
    int pv = find(v);
    if(pu!=pv){
        sise[pv] += sise[pu];
        p[pu] = pv;
    }
}

signed main(){
    int n, m, p, q;
    scanf("%lld %lld %lld %lld", &n, &m, &p, &q);

    init(n);
    while (p--){
        int u, v;
        cin >> u >> v;
        merge(u, v);//�����ݹ�ϵ���˺ϲ�
    }
    int x = sise[find(1)];

    init(m);
    while (q--){
        int u, v;
        cin >> u >> v;
        u *= -1, v *= -1;
        merge(u, v);//�����ݹ�ϵ���˺ϲ�
    }
    int y = sise[find(1)];
    int sum = min(x, y);
    printf("%lld\n", sum);
    return 0;
}
