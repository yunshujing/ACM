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

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    
    int N, M;  
    cin >> N >> M;  
    vector<int> A(N + 1); // +1 ��Ϊ�˷�����㣬A[0] ����
    vector<int> sums(N + 1, 0);
    for (int i = 1; i <= N; ++i) {  
        cin >> A[i];
        sums[i] = (sums[i - 1] + A[i]) % M;   
    }  


    // ͳ��ÿ��ǰ׺�ͳ��ֵĴ���  
    map<int, int> count;  
    for (int sum : sums) {  
        count[sum]++;  
    }  

    // �����  
    int ans = 0;  
    for (auto& p : count) {  
        int sum = p.first;  
        int freq = p.second;  
        if (freq > 1) {  
            // ����ÿ��ǰ׺�ͣ����Ƕ�����ѡ��������ͬ����Ϣ���������Լ�����  
            // ����ѡ��һ����Ϣ�����������������ͬǰ׺�͵���Ϣ��  
            // ע��Ҫ�ų��Լ����Լ������  
            ans += (int)freq * (freq - 1); // ����� C(freq, 2)  
        }  
    }  

    cout << ans << endl;  
    return 0;
}
