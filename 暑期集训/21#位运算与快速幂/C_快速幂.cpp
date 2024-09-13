#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 10;
const double eps =1e-4;
//int a[N];
//vector <int> a;

int fastPower(int a, int b, int mod/* ȡģ */) {
    int result = 1; // ��ʼ�����Ϊ1
    a = a % mod; // ��a��mȡģ
    while (b > 0) {
        // ���b�ĵ�ǰλ��1���򽫵�ǰ��a�˵�result��
        if (b & 1) { // �ȼ��� if (b % 2 == 1)
            result *= a;
			result %= mod;
        }
        // ��aƽ����׼��������һλ
        a *= a;
		a %= mod;
        // b����һλ
        b >>= 1; // �ȼ��� b = b / 2;
    }
    return result;
}

signed main() {
    int a, b, m;
    cin >> a >> b >> m;
    printf("%d^%d mod %d=%d", a, b, m, fastPower(a, b, m));
    return 0;
}