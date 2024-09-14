#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

int s[110][2];
int st[110];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m;i++){
        char x;
        cin >> s[i][0] >> x ;
        if(x=='M'&&!st[s[i][0]]){
            s[i][1] = 1;
            st[s[i][0]]++;
        }
        else{
            s[i][1] = 0;
        }
    }

    for (int i = 1; i <= m;i++){
        if(s[i][1]==1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

        return 0;
}