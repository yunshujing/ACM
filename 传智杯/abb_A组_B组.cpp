#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;
int sum[10100][26];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    int n,cnt=0,j;
    string s;
    cin >> n >> s;
    for (int i = n - 1; i >= 0;i--){
        for (j = 0; j < 26;j++){
            sum[i][j] = sum[i + 1][j];
        }
        sum[i][s[i] - 'a']++;
    }
    for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < 26; j++)
        {
            if(j!=s[i]-'a'){
                cnt += sum[i + 1][j] * (sum[i + 1][j] - 1) / 2;
            }
        }
        
    }
    cout << cnt;
    return 0;
}