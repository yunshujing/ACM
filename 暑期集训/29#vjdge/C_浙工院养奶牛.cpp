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

    vector<int> dp(56);
    dp[1] = 1, dp[2] = 1, dp[3] = 1,dp[4]=2,dp[5]=3;	//��1�굽��4�궼ֻ��һֻ��ĸţ������һֻСĸţ 
    //���������У�������һ���ĸţ��������ǰ��ĸţ���������ǵ����꣬�����Ѿ������ˣ�
    for(int i=6;i<=55;i++){
        dp[i] = dp[i-1] + dp[i-3]; 
    }

    
    cout << dp[50] << endl;

    return 0;
}