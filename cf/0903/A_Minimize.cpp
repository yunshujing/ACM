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

    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        int min = 0x3f3f3f3f;
        for (int c = a; c <= b;c++){
            int tmp = (c - a) + (b - c);
            if(tmp<min){
                min = tmp;
            }
        }
        cout << min << endl;
    }

    return 0;
}