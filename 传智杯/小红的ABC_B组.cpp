#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

int cnt = -1;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    string s;
    getline(cin, s);
    for(int i=1;i<s.length();i++)
        if(s[i]==s[i-1])
            return cout<<2,0;
    for(int i=1;i<s.length();i++)
        if(s[i]==s[i-2])
            return cout<<3,0;
    cout << -1;
    return 0;
}