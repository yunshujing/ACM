#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
const int maxn = 1e3 + 100;

int a[maxn][maxn];
int sum[maxn][maxn];

signed main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];//�������
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + a[i][j] - sum[i - 1][j - 1];
            //��;�����d��+��d��+����-����d�ͣ��ظ���
		}
	}
	int maxx = -10000;
	for (int x1 = 1; x1 <= n; x1++) {
		for (int y1 = 1; y1 <= n; y1++) {
			for (int x2 = x1; x2 <= n; x2++) {
				for (int y2 = y1; y2 <= n; y2++) {
					int s = sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1];
                    //����x2y2��x1y1�ľ���֮�ͣ�Ҫ��ȥx1y2��x2y1���ظ�����
					maxx = max(maxx, s);
				}
			}
		}
	}
	cout << maxx << endl;
	return 0;
}