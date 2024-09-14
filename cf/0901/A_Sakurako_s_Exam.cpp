#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

void solve(){
    int a, b;
    cin >> a >> b;
    bool flag = 1;
    if(a==0){
        if(b%2==0){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    else if(a%2==0){
            flag = 1;
    }
    else{
        flag = 0;
    }

    cout << (flag == 1 ? "YES" : "NO") << endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    int n;
    cin >> n;
    while(n--){
        solve();
    }

    return 0;
}