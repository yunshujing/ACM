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
//��ʼ��
void init(int n){
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;//�Լ����Լ��ļ໤��
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
    if(pu != pv){
        p[pu] = pv;//�µ����ϲ����
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n, m;
    cin >> n >> m ;
    init(n);
    while (m--){
        int z, x, y;
        cin >> z >> x >> y;
        if(z==1){
        merge(x, y);//�����ݹ�ϵ���˺ϲ�
        }
        if(z==2){
            if(find(x) == find(y)){
                cout << "Y" << endl;
            }
            else{
                cout << "N" << endl;
            }
        }
    }
    return 0;
}