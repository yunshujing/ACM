#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

typedef long long ll;
typedef unsigned long long ull; // 自然溢出
typedef pair<int,int> PII;
const int S = 50; // 测试数
// 快速乘,防止乘法溢出longlong
ll mult_mod(ll u,ll v,ll p){
    return (u * v - ll((/*long*/ double)u * v / p) * p + p) % p;
}
// 快速幂
ll fast_pow(ll x,ll y,ll mod){
    ll res = 1;
    x %= mod;
    while(y){
        if(y & 1) res = mult_mod(res,x,mod);
        x = mult_mod(x,x,mod);
        y >>= 1;
    }
    return res;
}

bool witness(ll a,ll n){
    ll u = n - 1;
    int t = 0;
    // 计算t,u,对n-1一直除2,直到是奇数,剩下的奇数是u,除2次数是t
    while(u & 1 == 0){u = u >> 1,t++;} 
    ll x1,x2;
    x1 = fast_pow(a,u,n); // 计算a^u
    // 做t次平方
    for(int i = 1;i <= t;i++){
        x2 = fast_pow(x1,2,n); // 平方后的结果
        // 二次探测定理
        if(x2 == 1 && x1 != 1 && x1 != n - 1) return true; // 必然是合数
        x1 = x2;
    }
    // 最后x1=a^n-1,费马小定理
    if(x1 != 1) return true; // 必然是合数
    return false;
}

int miller_rabin(ll n){
    if(n < 2) return 0; // 小于2是合数
    if(n == 2) return 1; // 2是质数
    if(n % 2 == 0) return 0; // 偶数是合数
    // 剩下做测试
    for(int i = 0;i < S;i++){
        ll a = rand() % (n - 1) + 1; // 随机一个a
        if(witness(a,n)) return 0; // 测试
    }
    return 1;
}

int vis[10010],n,sum=0x3f3f3f3f3f;
void dfs(vector<int> g,int cnt){
    if(cnt == n){
        sum = min(sum, cnt);
        return;
    }
    for(int i = 1 ; i <= n; i++){
        if(vis[i]) continue;//已经标记就跳过
        g.push_back(i);
        vis[i] = 1;//标记
        dfs(g, cnt + 1);
        g.pop_back();
        vis[i] = 0;//取消标记
    }
}

vector<int> sushu;
bool st[168];        //第几个素数被用过了
int f[10][100];        //第i个数的质因子有第几个素数
int n,xcnt[10];        //第i个数有几个质因子
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    for (int i = 2; i <= 1000;i++)
        if (miller_rabin(i)){
            sushu.push_back(i);
            }
    
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        for (int j = 0; x != 1;j++){
            if(x%sushu[j]==0){

            }
        }
    }

    
    


        return 0;
}