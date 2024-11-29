#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    string s,s1, s2;
    cin >> s;
    int len = s.size();
    if(len%3<eps){
        for (int i = 0; i < len / 3 * 2;i++){
            cout << s[i];
        }
        cout << " ";
        for (int i = len / 3 * 2; i < len;i++){
            cout << s[i];
        }
    }
    else
        cout << "-1";

        return 0;
}