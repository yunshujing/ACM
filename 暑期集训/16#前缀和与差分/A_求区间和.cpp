#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
const int maxn = 1e5 + 100;

int s[maxn];
int s2[maxn];

signed main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
		s2[i] = s[i] + s2[i - 1];//�ۼ�ǰi���ĺ͵�����
	}
	int m; cin >> m;
	for (int i = 1; i <= m; i++) {
		int l, r; cin >> l >> r;//����
		cout << s2[r] - s2[l - 1] << endl;//ǰr���ĺ� - ǰl-1���ĺ� == l~r֮��ĺ�
	}
	return 0;
}