#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define double long double
#define endl "\n"
#define fi first
#define se second
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

int p[30005];  //�ҵĸ�����˭ 
int dis[30005]; //�ҵ����ڵľ��� 
int siz[30005];

//��ʼ��n���ˣ������ĸ��壩 
void init(int n){
	for(int i=1;i<=n;i++){
		p[i] = i; //�Լ����Լ��ļ໤�� 
		dis[i] = 0;
		siz[i] = 1;  //�Լ��ǵ�һ 
	}
}

//��ѯ�����Լ�����������ڣ� 
int find(int x){
	if(x != p[x]){
		int root = find(p[x]);
		dis[x] += dis[p[x]];
		p[x] = root;
	}
	return p[x];
}

//�ϲ������ݹ�ϵ�� 
void merge(int u, int v){
	int pu = find(u);  //��u�ĵ� 
	int pv = find(v);  //��v�ĵ� 
	if(pu != pv){
		dis[pu] = siz[pv];
		siz[pv] += siz[pu]; 
		p[pu] = pv;
	}
	
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cout << fixed << setprecision(6);
    
    int q;
	cin >> q;
	
	init(30000); 
	
	while(q--){
		char op;
		int i, j;
		cin >> op >> i >> j;
		if(op == 'M'){
			merge(i, j);
		}else if(op == 'C'){
			if(find(i) == find(j)){  //ͬΪһ������ 
				int ans = max(0, abs(dis[i] - dis[j])- 1 ); 
				cout << ans << endl;
			} else{
				cout << "-1\n";
			}
		}
		
	}
	return 0;
}