#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
const int maxn = 1e7 + 100;

//ǰ׺�� ��ĳһ����ǰ n ��ĺ�  (�������C�������ǰ׺�͹��ģ������ TL)

/*
�������
ԭ���飨��������ǰ׺�����飩
ǰ׺�����飨ԭ�����ǰ׺�����飩
*/
//�޸Ĳ�� -> ԭ����
//s2[x]+1 s2[x+1]-1 -> [x-y]

int a[maxn] = { 0 };
int b[maxn] = { 0 };

signed main() {
	int n, p; cin >> n >> p;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];//ԭ����
	}
	while (p--) {
		int x, y, z; cin >> x >> y >> z;//����
		b[x] += z;
		b[y + 1] -= z;//y֮��Ҫ�ӷ֣���ǰ��ȥ��������������
	}
	int minn = a[1] + b[1];
	for (int i = 1; i <= n; i++) {
		b[i] = b[i] + b[i - 1];//�����������ԭ���飬����ǰ��Ĳ�ֽ������
		a[i] = a[i] + b[i];    //�������������//ԭ���ּ��ϲ��
		minn = min(minn, a[i]);
	}
	cout << minn << endl;
}