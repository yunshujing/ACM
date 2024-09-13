#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<stdio.h>
using namespace std;
#define int long long
#define endl "\n"
#define vll vector<long long>
#define fi first
#define se second
#define pub push_back
#define pob pop_back
const int N = 1e6 + 10;
const double eps =1e-4;
const int mod1 = 998244353;

const int maxlen = 11;
int n;//N <= maxlen;
vector<int> tm;//�洢�ʺ��������

//���ÿ�ֿ����µ�ÿ���ʺ��������

int vis[maxlen][maxlen] = { 0 };
int cnt = 0;
int CNT = 0;
bool flag = 0;

void doAdd(int r, int c, int n, int val) {//��ǣ����꣬�߽磬�������
	if (r < 0 || r >= n) {
		return;
	}
	if (c < 0 || c >= n) {
		return;
	}
	vis[r][c] += val;
}

void add(int r, int c, int n, int val) {//���ֶ�ά���ǵķ�����ĺ�nice
	int i;
	for (int i = 0; i < n; i++) {
		doAdd(r, i, n, val);//��ȫ���
		doAdd(i, c, n, val);//��ȫ���
	}
	for (int i = 0; i < n; i++) {//�Խ��߱��
		doAdd(r + i, c + i, n, val);//����
		doAdd(r - i, c - i, n, val);//����
		doAdd(r + i, c - i, n, val);//����
		doAdd(r - i, c + i, n, val);//����
	}
}

void dfs(int dep, int maxdep) {
	int i;
	if (dep == maxdep) {//������
		cnt++;
		if (!tm.empty()) {
			for (auto x : tm) {
				printf("%5d", x);//�����ʽ
			}
			flag = 1;//����
			cout << endl;
		}
		return;
	}
	for (i = 0; i < maxdep; i++) {
		if (vis[dep][i] == 0) {
			tm.push_back(i + 1);
			add(dep, i, maxdep, 1);//���
			dfs(dep + 1, maxdep);
			tm.pop_back();
			add(dep, i, maxdep, -1);
		}
	}
}

signed main() {
	cin >> n;
	dfs(0, n);
	if (!flag) {
		cout << "no solute!" << endl;
	}
}

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// int n, ok;

// void dfs(int x, vector<int> ans, set<int> l, set<int> s, set<int> q){
// 	if(n+1 == x){ 
// 		ok = 1;
// 		for(int i=0;i<n;i++){
// 			printf("%5d", ans[i]);
// 		}
// 		printf("\n");
// 		return;
// 	}
	
// 	for(int i=1;i<=n;i++){  //�� 
// 		if(l.count(i)) continue;
// 		if(s.count(x + i)) continue;
// 		if(q.count(x - i)) continue;
// 		l.insert(i);
// 		s.insert(x + i);
// 		q.insert(x - i);
// 		ans.push_back(i);
		
// 		dfs(x+1, ans, l, s, q);
// 		ans.pop_back();
// 		l.erase(i);
// 		s.erase(x + i);
// 		q.erase(x - i);
// 	} 
	
// } 

// signed main() { 
// 	cin >> n;
// 	dfs(1, {}, {}, {}, {}); 
// 	if(!ok){
// 		cout << "no solute!" << '\n';
// 	}

// 	return 0; 
// }
