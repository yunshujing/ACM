/* #include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;
int mx = 0,k;
vector<int> a;
int vis[N],n,sum=0;
void dfs(vector<int> g,int cnt){
    if(cnt == n){
        if(sum%k==0)mx = max(mx, sum%10000);
        return;
    }
    for(int i = 1 ; i <= n; i++){
        if(vis[a[i]]) continue;//已经标记就跳过
        g.push_back(a[i]);
        sum += a[i];
        vis[a[i]] = 1;//标记
        dfs(g, cnt + 1);
        g.pop_back();
        sum -= a[i];
        vis[a[i]] = 0;//取消标记
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    dfs({}, 0);
    if(mx)
        return cout << mx%10000, 0;
    cout << "-1";

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
long long dp[1010][1010];
int main() {
    long long n,k,i,x,j;
    cin>>n>>k;
    for(i=1;i<k;i++)dp[0][i]=-1e17;
    for(i=1;i<=n;i++){
        cin>>x;
        for(j=0;j<k;j++)dp[i][j]=dp[i-1][j];        //不取x
        for(j=0;j<k;j++){
            dp[i][(j+x)%k]=max(dp[i][(j+x)%k],dp[i-1][j]+x);    //取x
            // cout << dp[i][j] << ' ';
        }
        // cout << endl;
    }
    cout<<(dp[n][0]>0?dp[n][0]:-1);
}