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
    int n;
    cin >> n;
    string a, b, c;
    map<string, set<string>> zm;
    for (int i = 0; i < n;i++){
        cin >> a >> b >> c;
        if(c=="accepted"){
            zm[b].insert(a);
        }
    }
    int max = 0;
    string tm;
    for(auto x:zm){
        if(x.second.size()>max){
            tm = x.first;
            max = x.second.size();
        }
    }

    cout << tm << endl;
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