// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// #define fi first
// #define se second
// #define mod3 998244353
// #define mod7 1000000007
// const int N = 1e6 + 10;
// const double eps =1e-4;
// int p[10000][2];
// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);cout.tie(nullptr);

//     int n, q;
//     cin >> n >> q;
//     int s[n] = {0};
//     for (int i = 0; i < q; i++)
//     {
//         cin >> p[i][0] >> p[i][1];
//     }
    

//     return 0;
// }
#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
const int MOD = 998244353;  
  
int N, Q;  
vector<int> P, V;  
  
// ����������һ�����������ĳ�������Ƿ�ᵼ�¿���  
// �������Ǽ򻯴�����ֱ��ʵ�֣���Ϊ������ʵ�ֻ���������θ����������ֵ  
bool canPerformOperation(int opIdx, const vector<int>& prefixMax, const vector<int>& suffixMax) {  
    // ����prefixMax��suffixMax�Ѿ�ͨ��ĳ�ַ�ʽ�����������  
    // ��������ֻ��ģ�������  
    // ע�⣺��ʵ��ʵ���У�����Ҫ����prefixMax��suffixMax����������Ƿ�ᵼ�¿���  
    // ���磬���V[opIdx]�Ƿ����prefixMax[P[opIdx] - 1]��������ڵĻ�����suffixMax[P[opIdx] + 1]��������ڵĻ���  
    // ����������û��ʵ�ʼ�����Щֵ������ֻ�Ƿ���һ���̶���true��false��Ϊʾ��  
    // ʵ���ϣ�����Ҫ��������ľ����߼���ʵ���������  
    return true; // �������ǿ���ִ�в�������ֻ��һ��ʾ����  
}  

int countValidSequences() {  

    return 1;
int main() {  
    cin >> N >> Q;  
    P.resize(Q);  
    V.resize(Q);  
    for (int i = 0; i < Q; ++i) {  
        cin >> P[i] >> V[i];  
    }  
  
    // ���ú�����������Ч�Ĳ�����������  
    int result = countValidSequences();  
    cout << result << endl;  
  
    return 0;  
}