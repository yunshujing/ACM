#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

int s[4];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(6);

    char s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if(s1=='<'){
        s[1]++;
    }
    else{
        s[0]++;
    }

    if(s2=='<'){
        s[2]++;
    }
    else{
        s[0]++;
    }

    if(s3=='<'){
        s[2]++;
    }
    else{
        s[1]++;
    }

    if((s[0]>s[1]&&s[1]>s[2])||(s[2]>s[1]&&s[1]>s[0])){
        cout << 'B' << endl;
    }
    if((s[0]>s[1]&&s[2]>s[0])||(s[0]>s[2]&&s[1]>s[0])){
        cout << 'A' << endl;
    }
    if((s[0]>s[2]&&s[1]<s[2])||(s[1]>s[2]&&s[0]<s[2])){
        cout << 'C' << endl;
    }

    return 0;
}