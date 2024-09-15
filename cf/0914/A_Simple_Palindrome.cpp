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
	cin>>n;
	char a[10]={'a','e','i','o','u'};
	while(n--){
		int x;
		cin>>x;
		int ka=x/5;
		int ca=x%5;
		for(int j=0;j<5;j++){
			for(int i=1;i<=ka;i++){
				cout<<a[j];
			}
			if(ca>0){
				cout<<a[j];
				ca--;
			}
		}
		cout<<endl;
	}
	return 0; 
} 