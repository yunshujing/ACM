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
#define mod1 9973

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

void solve(){
    int a, b;
    cin >> a >> b;
    // (a / b) % mod;
    // (a % mod * b ^ -1 % mod) % mod;
    int ans = ((a % mod1) * fastPower(b, mod1 - 2, mod1)) % mod1;
    cout << ans << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

