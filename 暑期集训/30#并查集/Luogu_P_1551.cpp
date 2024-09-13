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

vector<int> p(5010);//�ҵĸ�����˭
//��ʼ��
void init(int n){
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;//�Լ����Լ��ļ໤��
    }
    
}
//���Լ������������ ����O(1)
int find(int x){
	/* 
    if(x != p[x]){
        return find(p[x]);//���滹����
    }
    else{
        return x;//�Լ������Լ��ļ໤�ˣ�������
    }
	*/
	if(x != p[x]){
        p[x] = find(p[x]);//·��ѹ��[better!]
    }
    return p[x];
}
//�ϲ�
void merge(int u,int v){
    int pu = find(u);
    int pv = find(v);
    if(pu != pv){
        p[pu] = pv;//�µ����ϲ����
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;
    init(n);
    while (m--){
        int u, v;
        cin >> u >> v;
        merge(u, v);//�����ݹ�ϵ���˺ϲ�
    }
    while(q--){
        int a, b;
        cin >> a >> b;
        if(find(a) == find(b)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}