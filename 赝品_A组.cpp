#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;
map<int, int> mp;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    // sort(mp.begin(),mp.end());
    

    vector<int> a;
    for(auto it = mp.begin(); it != mp.end(); ++it){
        if(it->second <= 2){
            a.push_back(it->first);
        }
    }
    sort(a.begin(), a.end());

    int k = a.size();
    cout << k << endl;

    for (int i = 0; i < a.size();i++){
        cout << a[i]<<" ";
    }
        return 0;
}