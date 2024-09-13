#include <iostream>  
#include <vector>  
using namespace std;  
  
const int MOD = 998244353;  
  
// ����������Ԫ�����������ȡģ��  
long long pow_mod(long long x, long long n, long long mod) {  
    long long result = 1;  
    while (n > 0) {  
        if (n % 2 == 1) {  
            result = (result * x) % mod;  
        }  
        x = (x * x) % mod;  
        n /= 2;  
    }  
    return result;  
}  
  
// �����ȡģ C(n, k) % mod  
long long comb(long long n, long long k, long long mod) {  
    if (k > n) return 0;  
    if (k * 2 > n) k = n - k; // ���öԳ��Լ��ټ�����  
    long long result = 1;  
    for (long long i = 0; i < k; ++i) {  
        result = (result * (n - i)) % mod;  
        result = (result * pow_mod(i + 1, mod - 2, mod)) % mod; // ʹ����Ԫ  
    }  
    return result;  
}  
  
int main() {  
    int n, m;  
    cin >> n >> m;  
    vector<int> a(n);  
    int total_need = 0;  
    for (int i = 0; i < n; ++i) {  
        cin >> a[i];  
        total_need += a[i];  
    }  
      
    if (total_need > m) {  
        cout << 0 << endl;  
        return 0;  
    }  
      
    int remaining = m - total_need;  
    long long result = comb(remaining + n - 1, n - 1, MOD);  
    cout << result << endl;  
      
    return 0;  
}